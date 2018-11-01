---
title: Estensioni Microsoft
ms.date: 11/04/2016
helpviewer_keywords:
- Microsoft extensions to C/C++
ms.assetid: 68654516-24ef-4f33-aae2-175f86cc1979
ms.openlocfilehash: d8104c2df2335e11dcb711108d566e0fdd069762
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50592205"
---
# <a name="microsoft-extensions"></a>Estensioni Microsoft

*istruzione di ASM*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**ASM***un'istruzione di assembly* **;** <sub>opt  </sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;**ASM {***elenco di istruzioni di assembly***};** <sub>opt    </sub>

*elenco di istruzioni di assembly*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*un'istruzione di assembly* **;** <sub>opt</sub> <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*un'istruzione di assembly* **;** *elenco di istruzioni di assembly* **;** <sub>opt</sub>

*MS-modificatore-list*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*MS-modifier* *ms-modificatore-list*<sub>opt</sub>

*MS-modifier*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**cdecl**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**fastcall**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**stdcall**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**syscall** (riservato per le implementazioni future)<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**oldcall** (riservato per le implementazioni future)<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**unaligned** (riservato per le implementazioni future)<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*modificatore di base*

*modificatore basato*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**based (** *tipo di base* **)**

*tipo basato su*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*Nome*