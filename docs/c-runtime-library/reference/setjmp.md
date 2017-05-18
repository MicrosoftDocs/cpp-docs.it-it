---
title: setjmp | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- setjmp
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
apitype: DLLExport
f1_keywords:
- setjmp
dev_langs:
- C++
helpviewer_keywords:
- programs [C++], saving states
- current state
- setjmp function
ms.assetid: 684a8b27-e8eb-455b-b4a8-733ca1cbd7d2
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 602ed9f5b1ff3c809055d9a231f81ee649bab8e8
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="setjmp"></a>setjmp
Salva lo stato corrente del programma.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int setjmp(  
   jmp_buf env   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `env`  
 Variabile in cui è archiviato l'ambiente.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce 0 dopo aver salvato l'ambiente dello stack. Se `setjmp` restituisce come risultato di una chiamata `longjmp`, restituisce l'argomento `value` di `longjmp`, o se l'argomento `value` di `longjmp` è 0, `setjmp` restituisce 1. Non vi è restituzione di errori.  
  
## <a name="remarks"></a>Note  
 La funzione `setjmp` salva un ambiente dello stack che successivamente è possibile ripristinare utilizzando `longjmp`. Quando `setjmp` e `longjmp` vengono utilizzate insieme, offrono un metodo per eseguire `goto` non in locale. In genere vengono utilizzate per passare il controllo di esecuzione alla gestione degli errori o al codice di ripristino in una routine chiamata in precedenza senza utilizzare le convenzioni normali di chiamata o restituzione.  
  
 Una chiamata a `setjmp` salva l'ambiente corrente dello stack in `env`. Una chiamata successiva a `longjmp` ripristina l'ambiente salvato e restituisce il controllo al punto immediatamente successivo alla corrispondente chiamata `setjmp`. Tutte le variabili (eccetto le variabili di registro) accessibili al controllo di ricezione di routine contengono i valori che avevano quando `longjmp` è stato chiamato.  
  
 Non è possibile utilizzare `setjmp` per passare dal codice nativo al codice gestito.  
  
 **Nota** `setjmp` e `longjmp` non supportano la semantica degli oggetti C++. In programmi C++, utilizzare il meccanismo di gestione delle eccezioni C++.  
  
 Per altre informazioni, vedere [Uso di setjmp e longjmp](../../cpp/using-setjmp-longjmp.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`setjmp`|\<setjmp.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [_fpreset](../../c-runtime-library/reference/fpreset.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [longjmp](../../c-runtime-library/reference/longjmp.md)   
 [_setjmp3](../../c-runtime-library/setjmp3.md)
