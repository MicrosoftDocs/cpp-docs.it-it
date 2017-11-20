---
title: longjmp | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname: longjmp
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
f1_keywords: longjmp
dev_langs: C++
helpviewer_keywords:
- restoring stack environment and execution locale
- longjmp function
ms.assetid: 0e13670a-5130-45c1-ad69-6862505b7a2f
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 25023a1bfa0854d628931d5de9a852cae1d88ba5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="longjmp"></a>longjmp
Ripristina l'ambiente dello stack e le impostazioni locali di esecuzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      void longjmp(  
   jmp_buf env,  
   int value   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `env`  
 Variabile in cui è archiviato l'ambiente.  
  
 *value*  
 Valore da restituire alla chiamata di `setjmp`.  
  
## <a name="remarks"></a>Note  
 La funzione `longjmp` ripristina un ambiente dello stack e le impostazioni locali di esecuzione precedentemente salvati in `env` da `setjmp`. `setjmp` e `longjmp` offrono un modo per eseguire un'operazione `goto` non locale. In genere vengono usate per passare il controllo dell'esecuzione al codice di gestione degli errori o di ripristino in una routine chiamata in precedenza, senza usare le normali convenzioni di chiamata e restituzione del controllo.  
  
 Una chiamata a `setjmp` causa il salvataggio dell'ambiente corrente dello stack in `env`. Una chiamata successiva a `longjmp` ripristina l'ambiente salvato e restituisce il controllo al punto immediatamente successivo alla chiamata `setjmp` corrispondente. L'esecuzione riprende come se la chiamata `setjmp` avesse appena restituito *value*. I valori di tutte le variabili (eccetto le variabili di registro) accessibili per la routine che riceve il controllo contengono i valori esistenti al momento della chiamata di `longjmp`. I valori delle variabili di registro sono imprevedibili. Il valore restituito da `setjmp` deve essere diverso da zero. Se si passa 0 come *value*, il valore restituito effettivo viene sostituito con 1.  
  
 Chiamare `longjmp` prima che la funzione che ha chiamato `setjmp` restituisca il controllo. In caso contrario i risultati sono imprevedibili.  
  
 Tenere conto delle restrizioni seguenti quando si usa `longjmp`:  
  
-   Non partire dal presupposto che i valori delle variabili di registro rimangano invariati. I valori delle variabili di registro nella routine che chiama `setjmp` potrebbero non essere ripristinati sui valori appropriati dopo l'esecuzione di `longjmp`.  
  
-   Non usare `longjmp` per trasferire il controllo fuori da una routine di gestione degli interrupt, a meno che l'interrupt non sia causato da un'eccezione a virgola mobile. In questo caso, un programma può restituire il controllo da un gestore di interrupt tramite `longjmp` se reinizializza prima di tutto il pacchetto di operazioni matematiche a virgola mobile chiamando `_fpreset`.  
  
     **Nota** Fare attenzione quando si usano `setjmp` e `longjmp` nei programmi C++. Dato che queste funzioni non supportano la semantica degli oggetti C++, è preferibile usare il meccanismo di gestione delle eccezioni C++.  
  
 Per altre informazioni, vedere [Uso di setjmp e longjmp](../../cpp/using-setjmp-longjmp.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`longjmp`|\<setjmp.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [_fpreset](../../c-runtime-library/reference/fpreset.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [setjmp](../../c-runtime-library/reference/setjmp.md)