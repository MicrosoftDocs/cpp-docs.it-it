---
title: Funzionalità di sicurezza in CRT
description: Panoramica delle funzioni CRT sicure nel runtime di Microsoft C.
ms.date: 09/29/2020
ms.topic: conceptual
f1_keywords:
- _CRT_SECURE_NO_DEPRECATE
- _CRT_NONSTDC_NO_WARNINGS
- _CRT_SECURE_NO_WARNINGS
helpviewer_keywords:
- security deprecation warnings [C++]
- CRT_NONSTDC_NO_DEPRECATE
- buffers [C++], buffer overruns
- deprecation warnings (security-related), disabling
- _CRT_NONSTDC_NO_WARNINGS
- security [CRT]
- _CRT_SECURE_NO_WARNINGS
- _CRT_NONSTDC_NO_DEPRECATE
- _CRT_SECURE_NO_DEPRECATE
- security-enhanced CRT
- CRT_SECURE_NO_WARNINGS
- CRT_SECURE_NO_DEPRECATE
- deprecation warnings (security-related)
- buffer overruns
- CRT_NONSTDC_NO_WARNINGS
- CRT, security enhancements
- parameters [C++], validation
ms.assetid: d9568b08-9514-49cd-b3dc-2454ded195a3
ms.openlocfilehash: 963f5510350aa3be25586811889189d28a5f7b66
ms.sourcegitcommit: 9451db8480992017c46f9d2df23fb17b503bbe74
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2020
ms.locfileid: "91589887"
---
# <a name="security-features-in-the-crt"></a>Funzionalità di sicurezza in CRT

Molte funzioni CRT precedenti hanno versioni più sicure e recenti. Se esiste una funzione sicura, la precedente versione, meno sicura, è contrassegnata come deprecata e la nuova versione ha il suffisso `_s` ("sicura").

In questo contesto, "deprecato" significa che l'uso della funzione non è consigliato. Non significa che la funzione è stata pianificata per essere rimossa dalla libreria CRT.

Le funzioni sicure non impediscono o correggono gli errori di sicurezza. Ma intercettano gli errori quando si verificano. Eseguono controlli aggiuntivi per le condizioni di errore. Se si verifica un errore, viene richiamato un gestore degli errori (vedere [convalida del parametro](../c-runtime-library/parameter-validation.md)).

La funzione, ad esempio, `strcpy` non è in grado di stabilire se la stringa che sta copiando è troppo grande per il buffer di destinazione. La relativa controparte sicura, `strcpy_s` , accetta la dimensione del buffer come parametro. Quindi, può determinare se si verificherà un sovraccarico del buffer. Se si usa `strcpy_s` per copiare 11 caratteri in un buffer di 10 caratteri, si tratta di un errore da parte dell'utente `strcpy_s` . Impossibile correggere l'errore. Tuttavia, può rilevare l'errore e informare l'utente richiamando il gestore di parametro non valido.

## <a name="eliminating-deprecation-warnings"></a>Eliminazione degli avvisi di deprecazione

Esistono diversi modi per eliminare gli avvisi di deprecazione per le funzioni precedenti, meno sicure. Il più semplice è quello di definire `_CRT_SECURE_NO_WARNINGS` o di usare il pragma [warning](../preprocessor/warning.md). Verranno disabilitati gli avvisi di deprecazione, ma i problemi di sicurezza che hanno causato gli avvisi sono ancora disponibili. È preferibile lasciare gli avvisi di deprecazione abilitati e sfruttare le nuove funzionalità di sicurezza CRT.

In C++, il modo più semplice per eseguire questa operazione consiste nell'usare gli [Overload dei modelli protetti](../c-runtime-library/secure-template-overloads.md). In questo modo verranno eliminati gli avvisi di deprecazione, in molti casi, sostituendo le chiamate alle funzioni deprecate con chiamate a versioni sicure di tali funzioni. Ad esempio, considerare la chiamata deprecata a `strcpy`:

```
char szBuf[10];
strcpy(szBuf, "test"); // warning: deprecated
```

Definendo `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` come 1, viene eliminato l'avviso modificando la chiamata `strcpy` a `strcpy_s`, che evita sovraccarichi del buffer. Per altre informazioni, vedere [Overload di modelli sicuri](../c-runtime-library/secure-template-overloads.md).

Per queste funzioni deprecate senza overload dei modelli sicuri, è necessario considerare la possibilità di aggiornare manualmente il codice per utilizzare le versioni sicure.

Un'altra origine degli avvisi di deprecazione, indipendente dalla sicurezza, sono le funzioni POSIX. Sostituire i nomi delle funzioni POSIX con i relativi equivalenti standard. Ad esempio, modificare [access](../c-runtime-library/reference/access-crt.md) in [_access](../c-runtime-library/reference/access-waccess.md) o disabilitare gli avvisi di deprecazione correlati a POSIX definendo `_CRT_NONSTDC_NO_WARNINGS`. Per altre informazioni, vedere [Compatibilità](compatibility.md).

## <a name="additional-security-features"></a>Funzionalità di sicurezza aggiuntive

Di seguito sono riportate alcune delle funzionalità di sicurezza:

- `Parameter Validation`. Le funzioni sicure e molte delle controparti non sicure convalidano i parametri. La convalida può includere:

  - Verifica dei valori **null** .
  - Verifica dei valori enumerati per la validità.
  - Verifica che i valori integrali siano in intervalli validi.

- Per altre informazioni, vedere [Convalida dei parametri](../c-runtime-library/parameter-validation.md).

- Un gestore per i parametri non validi è accessibile anche allo sviluppatore. Quando una funzione rileva un parametro non valido, anziché dichiarare ed uscire dall'applicazione, CRT consente di controllare questi problemi tramite [_set_invalid_parameter_handler, _set_thread_local_invalid_parameter_handler](../c-runtime-library/reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md).

- `Sized Buffers`. È necessario passare le dimensioni del buffer a qualsiasi funzione sicura che scrive in un buffer. Le versioni sicure convalidano che il buffer sia sufficientemente grande prima di scrivervi. Ciò consente di evitare errori di sovraccarico del buffer pericolosi che potrebbero consentire l'esecuzione di codice dannoso. Queste funzioni in genere restituiscono un `errno` codice di errore e richiamano il gestore di parametro non valido se la dimensione del buffer è troppo piccola. Le funzioni che leggono da buffer di input, come `gets`, dispongono di versioni sicure che richiedono di specificare una dimensione massima.

- `Null termination`. Alcune funzioni che hanno lasciato stringhe potenzialmente non terminate hanno versioni sicure che garantiscono che le stringhe abbiano terminazione null.

- `Enhanced error reporting`. Le funzioni sicure restituiscono codici di errore con più informazioni sugli errori rispetto a quelle disponibili con le funzioni preesistenti. Le funzioni sicure e molte delle funzioni preesistenti ora impostano `errno` e spesso restituiscono un `errno` tipo di codice, per fornire una migliore segnalazione degli errori.

- `Filesystem security`. Le API di I/O di file sicuri supportano l'accesso sicuro ai file nel caso predefinito.

- `Windows security`. Le API di processo sicuro rafforzano i criteri di sicurezza e consentono agli ACL di essere specificati.

- `Format string syntax checking`. Le stringhe non valide vengono rilevate, ad esempio, usando dei caratteri di campo di tipo non corretto nelle stringhe di formato `printf`.

## <a name="see-also"></a>Vedi anche

[Convalida di parametri](../c-runtime-library/parameter-validation.md)<br/>
[Overload di modelli sicuri](../c-runtime-library/secure-template-overloads.md)<br/>
[Funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md)
