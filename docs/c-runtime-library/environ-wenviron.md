---
title: _environ, _wenviron | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- environ
- wenviron
- _wenviron
- _environ
dev_langs:
- C++
helpviewer_keywords:
- environ function
- _environ function
- _wenviron function
- process environment
- wenviron function
ms.assetid: 7e639962-6536-47cd-8095-0cbe44a56e03
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5f66e0aa847c0835290895aa7412410b2350d617
ms.sourcegitcommit: 6e3cf8df676d59119ce88bf5321d063cf479108c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/22/2018
---
# <a name="environ-wenviron"></a>_environ, _wenviron
La variabile `_environ` è un puntatore ad un array di puntatori a stringhe di caratteri multibyte che costituiscono l'ambiente del processo. Questa variabile globale è stata deprecata a favore di versioni funzionali più sicure, [getenv_s, _wgetenv_s](../c-runtime-library/reference/getenv-s-wgetenv-s.md) e [_putenv_s, _wputenv_s](../c-runtime-library/reference/putenv-s-wputenv-s.md), che devono essere usate al posto della variabile globale. `_environ` viene dichiarato in Stdlib.h.  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
extern char **_environ;  
```  
  
## <a name="remarks"></a>Note  
 In un programma che usa la funzione `main`, `_environ` è inizializzato all'avvio del programma in base alle impostazioni adottate dall'ambiente del sistema operativo. L'ambiente è costituito da uno o più voci del modulo  
  
 `ENVVARNAME` `=string`  
  
 `getenv_s` e `putenv_s` usano la variabile `_environ` per accedere e modificare la tabella dell'ambiente. Quando `_putenv` viene chiamato per aggiungere o eliminare le impostazioni di ambiente, le dimensioni della tabella dell'ambiente cambiano. La posizione in memoria può anche cambiare, a seconda dei requisiti di memoria del programma. Il valore di `_environ` viene adattato automaticamente.  
  
 La variabile `_wenviron`, dichiarata in Stdlib.h come:  
  
```  
extern wchar_t **_wenviron;  
```  
  
 è una versione a caratteri wide di `_environ`. In un programma che usa la funzione `wmain`, `_wenviron` è inizializzato all'avvio del programma in base alle impostazioni adottate dall'ambiente del sistema operativo.  
  
 In un programma che usa `main`, `_wenviron` è inizialmente  **NULL** perché l'ambiente è costituito da stringhe di caratteri multibyte. Alla prima chiamata a `_wgetenv` o a `_wputenv`, viene creato un ambiente corrispondente alla stringa con caratteri wide e a cui punta `_wenviron`.  
  
 Allo stesso modo, in un programma che usa `wmain`, `_environ` inizialmente è **NULL** perché l'ambiente è costituito da stringhe di caratteri wide. Alla prima chiamata a `_getenv` o a `_putenv`, viene creato un ambiente corrispondente alla stringa con caratteri multibyte e a cui punta `_environ`.  
  
 Quando due copie dell'ambiente (MBCS e Unicode) sono presenti contemporaneamente in un programma, il sistema runtime deve mantenere entrambe le copie, implicando tempi di esecuzione più lenti. Ad esempio, ogni volta che viene chiamato `_putenv`, viene eseguita automaticamente una chiamata anche a `_wputenv`, in modo che le due stringhe dell'ambiente corrispondano.  
  
> [!CAUTION]
>  In rare occasioni, quando il sistema di runtime gestisce sia una versione Unicode che una versione multibyte dell'ambiente, queste due versioni dell'ambiente potrebbero non corrispondere esattamente. Questo si verifica perché, sebbene ogni stringa univoca di caratteri multibyte esegua il mapping a una stringa Unicode univoca, il mapping da una stringa Unicode univoca a una stringa di caratteri multibyte non è necessariamente univoco. Di conseguenza, due stringhe Unicode distinte possono eseguire il mapping della stessa stringa multibyte.  
  
 Il polling `_environ` in un contesto Unicode non è necessario quando viene usato il collegamento [/MD](../build/reference/md-mt-ld-use-run-time-library.md) o `/MDd`. Per la DLL CRT, il tipo (wide o multibyte) del programma è sconosciuto. Verrà creato solo il tipo multibyte perché è lo scenario che si presenta più spesso.  
  
 Il seguente pseudocodice seguente mostra come ciò può verificarsi.  
  
```  
int i, j;  
i = _wputenv( "env_var_x=string1" );  // results in the implicit call:  
                                      // putenv ("env_var_z=string1")  
j = _wputenv( "env_var_y=string2" );  // also results in implicit call:  
                                      // putenv("env_var_z=string2")  
```  
  
 Nella notazione usata per questo esempio, le stringhe di caratteri non sono valori letterali stringa del linguaggio C; piuttosto, sono segnaposti che rappresentano valori letterali stringa dell'ambiente Unicode nella chiamata a `_wputenv` e stringhe dell'ambiente multibyte nella chiamata a `putenv`. I segnaposto '`x`' e '`y`' del carattere nelle due stringhe distinte dell'ambiente Unicode non eseguono il mapping in modo univoco ai caratteri nell'MBCS corrente. Invece, entrambi eseguono il mapping a qualche carattere MBCS '`z`' che è il risultato predefinito del tentativo di conversione delle stringhe.  
  
 Pertanto, nell'ambiente multibyte, il valore di "`env_var_z`" dopo la prima chiamata implicita a `putenv` sarebbe "`string1`", ma questo valore verrà sovrascritto alla seconda chiamata implicita a `putenv`, quando il valore di "`env_var_z`" è impostato su "`string2`". Di conseguenza l'ambiente Unicode (in `_wenviron`) e l'ambiente multibyte (in `_environ`) differirebbero seguendo questa serie di chiamate.  
  
## <a name="see-also"></a>Vedere anche  
 [Global Variables](../c-runtime-library/global-variables.md)  (Variabili globali)  
 [getenv, _wgetenv](../c-runtime-library/reference/getenv-wgetenv.md)   
 [getenv_s, _wgetenv_s](../c-runtime-library/reference/getenv-s-wgetenv-s.md)   
 [_putenv, _wputenv](../c-runtime-library/reference/putenv-wputenv.md)   
 [_putenv_s, _wputenv_s](../c-runtime-library/reference/putenv-s-wputenv-s.md)