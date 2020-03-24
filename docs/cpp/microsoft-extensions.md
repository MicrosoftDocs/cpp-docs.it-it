---
title: Estensioni Microsoft
ms.date: 11/04/2016
helpviewer_keywords:
- Microsoft extensions to C/C++
ms.assetid: 68654516-24ef-4f33-aae2-175f86cc1979
ms.openlocfilehash: a2d0846e55122f177b4868c2e80c4f1d27267f5e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80179406"
---
# <a name="microsoft-extensions"></a>Estensioni Microsoft

*ASM-Statement*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp; **__asm***assembly-istruzione* **;** <sub>consenso esplicito</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp; **__asm {** *Assembly-Instruction-List* **};** <sub>consenso esplicito</sub>

*Assembly-Instruction-List*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*assembly-istruzione* **;** <sub>consenso esplicito</sub> <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Assembly-Instruction* **;** *Assembly-Instruction-List* **;** <sub>consenso esplicito</sub>

*MS-Modifier-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*MS-Modifier* *-List*<sub>opz</sub>

*modificatore MS*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp; **__cdecl**<br/>
&nbsp;&nbsp;&nbsp;&nbsp; **__fastcall**<br/>
&nbsp;&nbsp;&nbsp;&nbsp; **__stdcall**<br/>
&nbsp;&nbsp;&nbsp;&nbsp; **__syscall** (riservato per le implementazioni future)<br/>
&nbsp;&nbsp;&nbsp;&nbsp; **__oldcall** (riservato per le implementazioni future)<br/>
&nbsp;&nbsp;&nbsp;&nbsp; **__unaligned** (riservato per le implementazioni future)<br/>
&nbsp;&nbsp;&nbsp;*modificatore basato su* &nbsp;

*modificatore basato su*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp; **__based (** *tipo basato su* **)**

*tipo basato su*:<br/>
&nbsp;&nbsp;&nbsp;*nome* &nbsp;
