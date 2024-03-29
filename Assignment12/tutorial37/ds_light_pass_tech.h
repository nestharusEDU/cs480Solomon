/*
		Copyright 2011 Etay Meiri

		This program is free software: you can redistribute it and/or modify
		it under the terms of the GNU General Public License as published by
		the Free Software Foundation, either version 3 of the License, or
		(at your option) any later version.

		This program is distributed in the hope that it will be useful,
		but WITHOUT ANY WARRANTY; without even the implied warranty of
		MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
		GNU General Public License for more details.

		You should have received a copy of the GNU General Public License
		along with this program.  If not, see <http://www.gnu.org/licenses/>.
		*/

#ifndef DS_LIGHT_PASS_TECH_H
#define	DS_LIGHT_PASS_TECH_H
#define GLM_FORCE_RADIANS
#include <glm/glm.hpp>
#include <glm/common.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <string>

#include "technique.h"

class DSLightPassTech : public Technique {
public:

	DSLightPassTech();

	virtual bool Init();

	void SetWVP(const glm::mat4& WVP);
	void SetPositionTextureUnit(unsigned int TextureUnit);
	void SetColorTextureUnit(unsigned int TextureUnit);
	void SetNormalTextureUnit(unsigned int TextureUnit);
	void SetEyeWorldPos(const glm::vec3& EyeWorldPos);
	void SetMatSpecularIntensity(float Intensity);
	void SetMatSpecularPower(float Power);
	void SetScreenSize(unsigned int Width, unsigned int Height);

private:

	GLuint m_WVPLocation;
	GLuint m_posTextureUnitLocation;
	GLuint m_normalTextureUnitLocation;
	GLuint m_colorTextureUnitLocation;
	GLuint m_eyeWorldPosLocation;
	GLuint m_matSpecularIntensityLocation;
	GLuint m_matSpecularPowerLocation;
	GLuint m_screenSizeLocation;
};


#endif