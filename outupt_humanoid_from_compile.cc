<body name="root_1" pos="0 0 0" euler="0 0 0">
            <joint name="root_1" type="free" />
            <geom pos="0 0.0746667 0" type="sphere" size="0.096" rgba="0 0 1 0.5" />
            <body name="chest_1" pos="0 0.2518944 0">
                <joint name="chest_1" pos="0 0 0" type="ball" />
                <geom pos="0 0.128 0" type="sphere" size="0.117333" rgba="0 1 0 0.5" />
                <body name="neck_1" pos="0 0.238820267 0">
                    <joint name="neck_1" pos="0 0 0" type="ball" />
                    <geom pos="0 0.18667 0" type="sphere" size="0.109333" rgba="1 0 0 0.5" />
                </body>
                <body name="right_shoulder_1" pos="-.0256533 0.259733 0.19531733">
                    <joint name="right_shoulder_1" pos="0 0 0" type="ball" />
                    <geom pos="0 -0.14933 0" quat="0.707107 -0.707107 0 0" type="capsule" size="0.048 0.096" />
                    <body name="right_elbow_1" pos="0 -0.2931066 0">
                        <joint name="right_elbow_1" pos="0 0 0" axis="0 0 1" limited="true" range="0 3.14" />
                        <geom pos="0 -0.128 0" quat="0.707107 -0.707107 0 0" type="capsule" size="0.04266 0.072" />
                        <body name="right_wrist_1" pos="0 -0.27621066 0">
                            <geom type="sphere" size="0.04266" rgba="0 1 0 0.5" />
                        </body>
                    </body>
                </body>
                <body name="left_shoulder_1" pos="-0.0256533 0.259733 -0.19531733">
                    <joint name="left_shoulder_1" pos="0 0 0" type="ball" />
                    <geom pos="0 -0.14933 0" quat="0.707107 -0.707107 0 0" type="capsule" size="0.048 0.096" />
                    <body name="left_elbow_1" pos="0 -0.2931066 0">
                        <joint name="left_elbow_1" pos="0 0 0" axis="0 0 1" limited="true" range="0 3.14" />
                        <geom pos="0 -0.128 0" quat="0.707107 -0.707107 0 0" type="capsule" size="0.04266 0.072" />
                        <body name="left_wrist_1" pos="0 -0.27621066 0">
                            <geom type="sphere" size="0.04266" rgba="0 1 0 0.5" />
                        </body>
                    </body>
                </body>
            </body>
            <body name="right_hip_1" pos="0 0 0.090546133">
                <joint name="right_hip_1" pos="0 0 0" type="ball" />
                <geom pos="0 -0.224 0" quat="0.707107 -0.707107 0 0" type="capsule" size="0.05866 0.16" />
                <body name="right_knee_1" pos="0 -0.449648 0">
                    <joint name="right_knee_1" pos="0 0 0" axis="0 0 1" limited="true" range="-3.14 0" />
                    <geom pos="0 -0.2133 0" quat="0.707107 -0.707107 0 0" type="capsule" size="0.0533 0.16533" />
                    <body name="right_ankle_1" pos="0 -0.43719466 0">
                        <joint name="right_ankle_1" pos="0 0 0" type="ball" />
                        <geom pos="0.048 -0.024 0" type="box" size="0.0944 0.02933 0.048" rgba="0 1 0 0.5" />
                    </body>
                </body>
            </body>
            <body name="left_hip_1" pos="0 0 -0.090546133">
                <joint name="left_hip_1" pos="0 0 0" type="ball" />
                <geom pos="0 -0.224 0" quat="0.707107 -0.707107 0 0" type="capsule" size="0.05866 0.16" />
                <body name="left_knee_1" pos="0 -0.449648 0">
                    <joint name="left_knee_1" pos="0 0 0" axis="0 0 1" limited="true" range="-3.14 0" />
                    <geom pos="0 -0.2133 0" quat="0.707107 -0.707107 0 0" type="capsule" size="0.0533 0.16533" />
                    <body name="left_ankle_1" pos="0 -0.43719466 0">
                        <joint name="left_ankle_1" pos="0 0 0" type="ball" />
                        <geom pos="0.048 -0.024 0" type="box" size="0.0944 0.02933 0.048" rgba="0 1 0 0.5" />
                    </body>
                </body>
            </body>
        </body>

        <body name="root" pos="-2 0 0" euler="0 -1.57079633 -1.57079633">
            <inertial pos="0 0.28 0" mass="6" diaginertia="0.1 0.1 0.1" />
            <joint name="root" type="free" />
            <geom pos="0 0.28 0" type="sphere" size="0.360000" rgba="0 0 1 0.5" />
            <body name="chest" pos="0 0.944604 0">
                <inertial pos="0 0.48 0" mass="14" diaginertia="0.1 0.1 0.1" />
                <joint name="chest" pos="0 0 0" type="ball" />
                <geom pos="0 0.48 0" type="sphere" size="0.440000" rgba="0 1 0 0.5" />
                <body name="neck" pos="0 0.895576 0">
                    <inertial pos="0 0.7 0" mass="2" diaginertia="0.1 0.1 0.1" />
                    <joint name="neck" pos="0 0 0" type="ball" />
                    <geom pos="0 0.7 0" type="sphere" size="0.41" rgba="1 0 0 0.5" />
                </body>
                <body name="right_shoulder" pos="-0.0962 0.974 0.73244">
                    <inertial pos="0 -0.56 0" mass="1.5" diaginertia="0.1 0.1 0.1" />
                    <joint name="right_shoulder" pos="0 0 0" type="ball" />
                    <geom pos="0 -0.56 0" quat="0.707107 -0.707107 0 0" type="capsule" size="0.18 0.36" />
                    <body name="right_elbow" pos="0 -1.09915 0">
                        <inertial pos="0 -0.48 0" mass="1" diaginertia="0.1 0.1 0.1" />
                        <joint name="right_elbow" pos="0 0 0" axis="0 0 1" limited="true" range="0 3.14" />
                        <geom pos="0 -0.48 0" quat="0.707107 -0.707107 0 0" type="capsule" size="0.16 0.27" />
                        <body name="right_wrist" pos="0 -1.03579 0">
                            <inertial pos="0 0 0" mass="0.5" diaginertia="0.1 0.1 0.1" />
                            <geom type="sphere" size="0.16" rgba="0 1 0 0.5" />
                        </body>
                    </body>
                </body>
                <body name="left_shoulder" pos="-0.0962 0.974 -0.73244">
                    <inertial pos="0 -0.56 0" mass="1.5" diaginertia="0.1 0.1 0.1" />
                    <joint name="left_shoulder" pos="0 0 0" type="ball" />
                    <geom pos="0 -0.56 0" quat="0.707107 -0.707107 0 0" type="capsule" size="0.18 0.36" />
                    <body name="left_elbow" pos="0 -1.09915 0">
                        <inertial pos="0 -0.48 0" mass="1" diaginertia="0.1 0.1 0.1" />
                        <joint name="left_elbow" pos="0 0 0" axis="0 0 1" limited="true" range="0 3.14" />
                        <geom pos="0 -0.48 0" quat="0.707107 -0.707107 0 0" type="capsule" size="0.16 0.27" />
                        <body name="left_wrist" pos="0 -1.03579 0">
                            <inertial pos="0 0 0" mass="0.5" diaginertia="0.1 0.1 0.1" />
                            <geom type="sphere" size="0.16" rgba="0 1 0 0.5" />
                        </body>
                    </body>
                </body>
            </body>
            <body name="right_hip" pos="0 0 0.339548">
                <inertial pos="0 -0.84 0" mass="4.5" diaginertia="0.1 0.1 0.1" />
                <joint name="right_hip" pos="0 0 0" type="ball" />
                <geom pos="0 -0.84 0" quat="0.707107 -0.707107 0 0" type="capsule" size="0.22 0.6" />
                <body name="right_knee" pos="0 -1.68618 0">
                    <inertial pos="0 -0.8 0" mass="3" diaginertia="0.1 0.1 0.1" />
                    <joint name="right_knee" pos="0 0 0" axis="0 0 1" limited="true" range="-3.14 0" />
                    <geom pos="0 -0.8 0" quat="0.707107 -0.707107 0 0" type="capsule" size="0.2 0.62" />
                    <body name="right_ankle" pos="0 -1.63948 0">
                        <inertial pos="0.18 -0.09 0" mass="1" diaginertia="0.1 0.1 0.1" />
                        <joint name="right_ankle" pos="0 0 0" type="ball" />
                        <geom pos="0.18 -0.09 0" type="box" size="0.354 0.11 0.18" rgba="0 1 0 0.5" />
                    </body>
                </body>
            </body>
            <body name="left_hip" pos="0 0 -0.339548">
                <inertial pos="0 -0.84 0" mass="4.5" diaginertia="0.1 0.1 0.1" />
                <joint name="left_hip" pos="0 0 0" type="ball" />
                <geom pos="0 -0.84 0" quat="0.707107 -0.707107 0 0" type="capsule" size="0.22 0.6" />
                <body name="left_knee" pos="0 -1.68618 0">
                    <inertial pos="0 -0.8 0" mass="3" diaginertia="0.1 0.1 0.1" />
                    <joint name="left_knee" pos="0 0 0" axis="0 0 1" limited="true" range="-3.14 0" />
                    <geom pos="0 -0.8 0" quat="0.707107 -0.707107 0 0" type="capsule" size="0.2 0.62" />
                    <body name="left_ankle" pos="0 -1.63948 0">
                        <inertial pos="0.18 -0.09 0" mass="1" diaginertia="0.1 0.1 0.1" />
                        <joint name="left_ankle" pos="0 0 0" type="ball" />
                        <geom pos="0.18 -0.09 0" type="box" size="0.354 0.11 0.18" rgba="0 1 0 0.5" />
                    </body>
                </body>
            </body>
        </body>
