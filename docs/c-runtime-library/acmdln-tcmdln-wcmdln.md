---
title: _acmdln, _tcmdln, _wcmdln | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _wcmdln
- _acmdln
apilocation:
- msvcrt.dll
apitype: DLLExport
f1_keywords:
- _acmdln
- acmdln
- _wcmdln
- wcmdln
- _tcmdln
- tcmdln
dev_langs:
- C++
helpviewer_keywords:
- _wcmdln global variable
- wcmdln global variable
- _acmdln global variable
- _tcmdln global variable
- tcmdln global variable
- acmdln global variable
ms.assetid: 4fc0a6a0-3f93-420a-a19f-5276061ba539
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: a713978e44762d5e4c771112ef5adf256a9475c6
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="acmdln-tcmdln-wcmdln"></a>_acmdln, _tcmdln, _wcmdln
Variabile globale CRT interna. Riga di comando  
  
## <a name="syntax"></a>Sintassi  
  
```  
char * _acmdln;  
wchar_t * _wcmdln;  
  
#ifdef WPRFLAG  
   #define _tcmdln _wcmdln  
#else  
   #define _tcmdln _acmdln  
```  
  
## <a name="remarks"></a>Note  
 Nelle variabili CRT interne viene archiviata l'intera riga di comando. Sono esposte nei simboli esportati per CRT, ma non sono progettate per l'uso nel codice. `_acmdln` archivia i dati come stringa di caratteri. `_wcmdln` archivia i dati come stringa di caratteri wide. `_tcmdln` può essere definita come `_acmdln` o `_wcmdln`, a seconda del tipo più appropriato.  
  
## <a name="see-also"></a>Vedere anche  
 [Variabili globali](../c-runtime-library/global-variables.md)
