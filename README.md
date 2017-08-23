# Kumulos Unity SDK

Kumulos provides tools to build and host backend storage for apps, send push notifications, view audience and behavior analytics, and report on adoption, engagement and performance.

## Get Started

1. Import the Unity package into your project
2. Attach the `KumulosInit` behaviour to your main scene's camera
3. Edit the `KumulosInit` file to complete initialization:

```csharp
var config = (new Config.Builder ("YOUR_API_KEY", "YOUR_SECRET_KEY"))
    .Build ();

Kumulos.Initialize (config);
```

For more information on integrating the Unity SDK with your project, please see the [Kumulos Unity integration guide](https://docs.kumulos.com/integration/unity).

## Contributing

Pull requests are welcome for any improvements you might wish to make. If it's something big and you're not sure about it yet, we'd be happy to discuss it first. You can either file an issue or drop us a line to [support@kumulos.com](mailto:support@kumulos.com).

## License

This project is licensed under the MIT license with portions licensed under the BSD 2-Clause and Apache 2 licenses. See our LICENSE file and individual source files for more information.
