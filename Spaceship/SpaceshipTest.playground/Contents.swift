import Cocoa        // (or UIKit for iOS)
import SceneKit
import QuartzCore   // for the basic animation
import XCPlayground // for the live preview

// create a scene view with an empty scene
var sceneView = SCNView(frame: CGRect(x: 0, y: 0, width: 600, height: 200))
let scene = SCNScene(named: "MainScene.scn")!
sceneView.scene = scene

// start a live preview of that view
XCPShowView(identifier: "The Scene View", view: sceneView)

// default lighting
sceneView.autoenablesDefaultLighting = true

// a camera
var cameraNode = SCNNode()
cameraNode.camera = SCNCamera()
cameraNode.position = SCNVector3(x: 0, y: 0, z: 3)
scene.rootNode.addChildNode(cameraNode)

var rocketNode = SCNNode()
rocketNode = scene.rootNode.childNode(withName: "Rocket", recursively: true)!

rocketNode.rotation = SCNVector4(x: 1.0, y: 1.0, z: 0.0, w: 0.0)

// animate the rotation of the torus
var spin = CABasicAnimation(keyPath: "rotation.w") // only animate the angle
spin.toValue = 2.0*M_PI
spin.duration = 3
spin.repeatCount = HUGE // for infinity
rocketNode.scale = SCNVector3(7.0, 7.0, 7.0)

rocketNode.runAction(SCNAction.move(by: SCNVector3(x: -85, y: 0, z: 0), duration: 0))
//10
var arrayOfDistance = [
    470.81,
    443.24,
    417.29,
    392.96,
    370.25,
    349.16,
    329.69,
    311.84,
    295.61,
    281,
    268.01,
    256.64,
    246.89,
    238.76,
    232.25,
    227.36,
    224.09,
    222.44,
    222.41,
    224,
    227.21,
    232.04,
    238.49,
    246.56,
    256.25,
    267.56,
    280.49,
    295.04,
    311.21,
    329,
    348.41,
    369.44,
    392.09,
    416.36,
    442.25,
    469.76,
    498.89,
    529.64,
    562.01,
    596,
    631.61,
    668.84
]

print(arrayOfDistance.count)

arrayOfDistance = arrayOfDistance.map { $0*0.17 }

var steps = [Double]()
var actions = [SCNAction]()

for i in 0..<arrayOfDistance.count - 1  {
    let step = arrayOfDistance[i] - arrayOfDistance[i+1]

    let action = SCNAction.move(by: SCNVector3(x: CGFloat(step), y: 0, z: 0), duration: 0.3)
    
    actions.append(action)
}

let sequence = SCNAction.sequence(actions)
//rocketNode.runAction(sequence)
rocketNode.runAction(sequence, completionHandler: {rocketNode.isHidden = true})






