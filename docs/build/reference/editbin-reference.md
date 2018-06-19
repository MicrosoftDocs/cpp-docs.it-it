---
title: Riferimenti a EDITBIN | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- editbin
dev_langs:
- C++
helpviewer_keywords:
- binary data, editing
- object files, modifying
- EDITBIN program
- COFF files, editing
ms.assetid: efdda03b-3dfc-4d31-90e6-caf5b3977914
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c20191fdb133fe09ed4f6a462cd777098acd5f05
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32372308"
---
# <a name="editbin-reference"></a>Riferimenti a EDITBIN
Microsoft COFF Binary File Editor (EDITBIN. EXE) consente di modificare i file binari comuni oggetto formato COFF (File). È possibile utilizzare EDITBIN per modificare i file oggetto, i file eseguibili e librerie a collegamento dinamico (DLL).  
  
> [!NOTE]
>  È possibile avviare questo strumento solo dal prompt dei comandi di [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)]. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File.  
  
 EDITBIN non è disponibile per l'utilizzo con i file generati con la [/GL](../../build/reference/gl-whole-program-optimization.md) l'opzione del compilatore. Eventuali modifiche apportate ai file binari generati con /GL dovranno essere apportate mediante ricompilazione e collegamento.  
  
-   [Riga di comando EDITBIN](../../build/reference/editbin-command-line.md)  
  
-   [Opzioni di EDITBIN](../../build/reference/editbin-options.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Strumenti per la compilazione in C/C++](../../build/reference/c-cpp-build-tools.md)