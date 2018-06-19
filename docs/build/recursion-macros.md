---
title: Macro di ricorsione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- NMAKE program, recursion macros
- recursion macros
- macros, recursion
ms.assetid: c53e5ae7-619e-46b1-bdc2-86d8c7798b1d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2759deaff6014cbba40c97f9d627baf6a800732f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32368961"
---
# <a name="recursion-macros"></a>Macro di ricorsione
Utilizzare le macro di ricorsione per chiamare in modo ricorsivo NMAKE. Le sessioni ricorsive ereditano macro della riga di comando e variabili di ambiente e le informazioni di Tools. Non ereditano le regole di inferenza definite nel makefile o **. SUFFISSI** e **. PREZIOSI** specifiche. Per passare le macro a una sessione NMAKE ricorsiva, impostare una variabile di ambiente con SET prima della chiamata ricorsiva, definire una macro nel comando per la chiamata ricorsiva o definire una macro in Tools.  
  
|Macro|Definizione|  
|-----------|----------------|  
|**RENDERE**|Comando utilizzato originariamente per richiamare NMAKE.<br /><br /> La macro $ (Make) fornisce il percorso completo di nmake.exe.|  
|**MAKEDIR**|Directory corrente al momento della chiamata NMAKE.|  
|**MAKEFLAGS**|Opzioni attualmente in vigore. Utilizzare come `/$(MAKEFLAGS)`.  Si noti che /F non sono incluso.|  
  
## <a name="see-also"></a>Vedere anche  
 [Macro speciali di NMAKE](../build/special-nmake-macros.md)