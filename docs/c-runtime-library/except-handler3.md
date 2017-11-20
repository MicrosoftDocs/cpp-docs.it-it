---
title: _except_handler3 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: _except_handler3
apilocation:
- msvcrt.dll
- msvcr90.dll
- msvcr80.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr100.dll
- msvcr110.dll
apitype: DLLExport
f1_keywords:
- _except_handler3
- except_handler3
dev_langs: C++
helpviewer_keywords:
- _except_handler3 function
- except_handler3 function
ms.assetid: b0c64898-0ae5-48b7-9724-80135a0813e2
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: dbbde719028df2d7b535548f4343b88e2c90efbd
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="excepthandler3"></a>_except_handler3
Funzione CRT interna. Usata da un framework per individuare il gestore di eccezioni appropriato per elaborare l'eccezione corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _except_handler3(  
   PEXCEPTION_RECORD exception_record,  
   PEXCEPTION_REGISTRATION registration,  
   PCONTEXT context,  
   PEXCEPTION_REGISTRATION dispatcher  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `exception_record`  
 Informazioni sulla specifica eccezione.  
  
 [in] `registration`  
 Record che indica la tabella di ambito da usare per cercare il gestore di eccezioni.  
  
 [in] `context`  
 Riservato.  
  
 [in] `dispatcher`  
 Riservato.  
  
## <a name="return-value"></a>Valore restituito  
 Se un'eccezione deve essere chiusa, restituisce `DISPOSITION_DISMISS`. Se l'eccezione deve essere passata a un livello superiore, ai gestori di eccezioni in cui è incapsulata, restituisce `DISPOSITION_CONTINUE_SEARCH`.  
  
## <a name="remarks"></a>Note  
 Se il metodo trova un gestore di eccezioni appropriato, passa l'eccezione al gestore. In questa situazione, il metodo non torna al codice che lo ha chiamato e il valore restituito è irrilevante.  
  
## <a name="see-also"></a>Vedere anche  
 [Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md) (Riferimento alfabetico alle funzioni)