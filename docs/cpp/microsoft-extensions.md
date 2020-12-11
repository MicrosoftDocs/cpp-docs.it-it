---
description: 'Altre informazioni su: estensioni Microsoft'
title: Estensioni Microsoft
ms.date: 11/04/2016
helpviewer_keywords:
- Microsoft extensions to C/C++
ms.assetid: 68654516-24ef-4f33-aae2-175f86cc1979
ms.openlocfilehash: f3a6bfb7e85c3b219d1dda67e051f731ecf54fe6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97161638"
---
# <a name="microsoft-extensions"></a>Estensioni Microsoft

*`asm-statement`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__asm`***`assembly-instruction`* **`;`** <sub>consenso esplicito</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__asm {`***`assembly-instruction-list`* **`} ;`** <sub>consenso esplicito</sub>  

*`assembly-instruction-list`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`assembly-instruction`***`;`** <sub>consenso esplicito</sub> <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`assembly-instruction`***`;`** *`assembly-instruction-list`* **`;`** <sub>consenso esplicito</sub>

*`ms-modifier-list`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`ms-modifier`**`ms-modifier-list`* <sub>consenso esplicito</sub>

*`ms-modifier`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__cdecl`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__fastcall`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__stdcall`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__syscall`** (riservato per implementazioni future)<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__oldcall`** (riservato per implementazioni future)<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__unaligned`** (riservato per implementazioni future)<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`based-modifier`*

*`based-modifier`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__based (`** *`based-type`* **`)`**

*`based-type`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`name`*
