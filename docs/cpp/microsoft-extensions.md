---
title: Estensioni Microsoft | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- Microsoft extensions to C/C++
ms.assetid: 68654516-24ef-4f33-aae2-175f86cc1979
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5699ce82a6e8537f12da50fdcb8288da167ecca3
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43752239"
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