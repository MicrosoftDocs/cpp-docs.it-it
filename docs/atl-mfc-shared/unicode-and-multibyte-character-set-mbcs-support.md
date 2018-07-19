---
title: Supporto (MBCS) del Set di caratteri Unicode e Multibyte | Microsoft Docs
ms.custom: ''
ms.date: 1/09/2017
ms.technology:
- cpp-mfc
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- MFC [C++], character set support
- MBCS [C++], strings and MFC support
- strings [C++], MBCS support in MFC
- character sets [C++], multibyte
- Unicode [C++], MFC strings
- Unicode [C++], string objects
- strings [C++], Unicode
- strings [C++], character set support
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6e9d212e74f77d21efa1b2ed030f8a1446d111fc
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37882949"
---
# <a name="unicode-and-multibyte-character-set-mbcs-support"></a>Supporto per set di caratteri Unicode e multibyte (MBCS)

Alcuni linguaggi, ad esempio, il giapponese e cinese, dispongono di set di caratteri di grandi dimensioni. Per supportare la programmazione per questi mercati, la MFC Microsoft Foundation Class Library () consente a due diversi approcci alla gestione dei set di caratteri di grandi dimensioni:

- [Unicode](#mfc-support-for-unicode-strings), `wchar_t` basati su caratteri wide e le stringhe codificate come UTF-16.

- [Set di caratteri multibyte (MBCS)](#mfc-support-for-mbcs-strings), **char** basati su caratteri singole o a byte doppio e le stringhe con codificate in un set di caratteri specifici delle impostazioni locali.

Microsoft consiglia le librerie MFC Unicode per tutte le nuove attività di sviluppo e le librerie MBCS sono state deprecate in Visual Studio 2013 e Visual Studio 2015. Questa procedura non è più necessaria. Sono stati rimossi gli avvisi di deprecazione di MBCS in Visual Studio 2017.

## <a name="mfc-support-for-unicode-strings"></a>Supporto MFC per le stringhe Unicode

L'intera libreria di classi MFC in modo condizionale è abilitata per i caratteri Unicode e le stringhe in caratteri "wide" archiviate come UTF-16. In particolare, nella classe [CString](../atl-mfc-shared/reference/cstringt-class.md) è abilitata per Unicode.

Questi libreria, il debugger e i file DLL vengono utilizzati per supportare Unicode in MFC:

|||||
|-|-|-|-|
|UAFXCW.LIB|UAFXCW. PDB|UAFXCWD.LIB|UAFXCWD. PDB|
|MFC*versione*U.LIB|MFC*versione*U.PDB|MFC*versione*U.DLL|MFC*versione*UD. LIB|
|MFC*versione*UD. PDB|MFC*versione*UD. DLL|MFCS*versione*U.LIB|MFCS*versione*U.PDB|
|MFCS*versione*UD. LIB|MFCS*versione*UD. PDB|MFCM*versione*U.LIB|MFCM*versione*U.PDB|
|MFCM*versione*U.DLL|MFCM*versione*UD. LIB|MFCM*versione*UD. PDB|MFCM*versione*UD. DLL|

(*versione* rappresenta il numero di versione del file; ad esempio, "140", versione 14.0.)

`CString` si basa sul tipo di dati TCHAR. Se il simbolo Unicode è definito per una compilazione del programma, è definito TCHAR come tipo `wchar_t`, un tipo di codifica dei caratteri a 16 bit. In caso contrario, si intende TCHAR **char**, la codifica dei caratteri a 8 bit normali. Pertanto, in formato Unicode, un `CString` è costituito da caratteri a 16 bit. Non Unicode, costituito da caratteri di tipo **char**.

Nel campo della programmazione Unicode completata dell'applicazione, è inoltre necessario:

- Utilizzare la macro t in modo condizionale le stringhe letterali per essere portabile in formato Unicode.

- Quando si passano le stringhe, prestare attenzione al fatto che gli argomenti della funzione richiedono una lunghezza in caratteri o una lunghezza in byte. La differenza è importante se si utilizzano le stringhe Unicode.

- Usare le versioni portabile le funzioni di gestione delle stringhe C run-time.

- Usare i seguenti tipi di dati per i caratteri e puntatori a caratteri:

   - Usare TCHAR in cui si utilizzerebbe **char**.

   - Usare LPTSTR in cui si utilizzerebbe **char\***.

   - Uso di LPCTSTR in cui si utilizzerebbe **const char\***. `CString` fornisce l'operatore LPCTSTR per la conversione tra `CString` e LPCTSTR.

`CString` fornisce inoltre supporto Unicode costruttori, operatori di assegnazione e operatori di confronto.

Il [Run-Time Library Reference](../c-runtime-library/c-run-time-library-reference.md) definisce portabile versioni di tutte le relative funzioni di gestione delle stringhe. Per altre informazioni, vedere la categoria [internazionalizzazione](../c-runtime-library/internationalization.md).

## <a name="mfc-support-for-mbcs-strings"></a>Supporto MFC per MBCS stringhe

La libreria di classi è abilitata anche per i set di caratteri multibyte, ma solo per double byte character set (DBCS).

In un set di caratteri multibyte, un carattere può essere uno o due byte. Se si tratta di due byte, il primo byte è uno speciale "byte di apertura" che rappresenta una scelta da un intervallo specifico, a seconda del codice con cui pagina è in uso. Nel loro insieme, il responsabile e "byte di chiusura" specifica una codifica dei caratteri univoci.

Se il simbolo MBCS è definito per una compilazione del programma, digitare TCHAR, in cui `CString` si basa, esegue il mapping a **char**. È responsabilità dell'utente per determinare quali byte in un `CString` sono byte di apertura e quali invece byte. La libreria di runtime C fornisce le funzioni che consentono di determinare questo.

Nel set DBCS, una determinata stringa può contenere tutti i caratteri ANSI a byte singolo, tutti i caratteri DBCS o una combinazione dei due. Queste possibilità richiedono particolare attenzione durante l'analisi di stringhe. Ciò include `CString` oggetti.

> [!NOTE]
> Serializzazione della stringa Unicode in MFC può leggere le stringhe Unicode e MBCS indipendentemente dalla versione dell'applicazione in esecuzione. I file di dati sono portabili tra le versioni di Unicode e MBCS del programma.

`CString` funzioni membro usano versioni speciali "testo generico" che chiamano le funzioni di runtime C, o usano funzioni compatibili con Unicode. Pertanto, ad esempio, se un `CString` funzione in genere chiamerebbe `strcmp`, chiama la funzione di testo generico corrispondente `_tcscmp` invece. A seconda del modo in cui sono definiti i simboli MBCS e Unicode, `_tcscmp` viene eseguito il mapping come segue:

|||
|-|-|
|_MBCS definito|`_mbscmp`|
|_UNICODE definito|`wcscmp`|
|Nessun simbolo definito|`strcmp`|

> [!NOTE]
> I simboli MBCS e Unicode si escludono a vicenda.

Mapping testo generico (funzione) per tutte le routine di gestione delle stringhe in fase di esecuzione sono illustrati nella [C Run-Time Library Reference](../c-runtime-library/c-run-time-library-reference.md). Per un elenco, vedere [internazionalizzazione](../c-runtime-library/internationalization.md).

Analogamente, `CString` vengono implementati i metodi con mapping dei tipi di dati generici. Per abilitare il formato MBCS e Unicode, MFC utilizza TCHAR per **char** oppure `wchar_t`, LPTSTR per **char\***  oppure `wchar_t*`e LPCTSTR per **char const\***  o `const wchar_t*`. Garantiscono i mapping corretti per MBCS o Unicode.

## <a name="see-also"></a>Vedere anche

[Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)  
[Modifica di stringhe](../c-runtime-library/string-manipulation-crt.md)  
