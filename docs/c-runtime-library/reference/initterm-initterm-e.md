---
title: _initterm, _initterm_e | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _initterm_e
- _initterm
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _initterm_e
- initterm
- _initterm
- initterm_e
dev_langs: C++
helpviewer_keywords:
- initterm function
- initterm_e function
- _initterm function
- _initterm_e function
ms.assetid: 85131efe-c747-429a-8897-bcdedb000172
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 377f8e19268a643b0237da66ba14a82fc7b6685b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="initterm-initterme"></a>_initterm, _initterm_e
Metodi interni che procedono a una tabella di puntatori funzione e li inizializzano.  
  
 Il primo puntatore è la posizione iniziale nella tabella e il secondo puntatore è la posizione finale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __cdecl _initterm(  
   PVFV *,  
   PVFV *  
);  
  
int __cdecl _initterm_e(  
   PVFV *,  
   PVFV *  
);  
```  
  
## <a name="return-value"></a>Valore restituito  
 Un codice di errore diverso da zero se un'inizializzazione ha esito negativo e genera un errore; 0 se non si verificano errori.  
  
## <a name="remarks"></a>Note  
 Questi metodi vengono chiamati solo internamente durante l'inizializzazione di un programma C++. Non chiamare questi metodi in un programma.  
  
 Quando questi metodi procedono a una tabella di voci di funzioni, essi ignorano le voci `NULL` e continuano.  
  
## <a name="see-also"></a>Vedere anche  
 [Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md) (Riferimento alfabetico alle funzioni)