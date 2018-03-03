---
title: Caratteri Unicode e Multibyte (MBCS) supporto per Set | Documenti Microsoft
ms.custom: 
ms.date: 1/09/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: adbe6ca25afd31c0aba853fde8b503dc333f63f4
ms.sourcegitcommit: 56f6fce7d80e4f61d45752f4c8512e4ef0453e58
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/12/2018
---
# <a name="unicode-and-multibyte-character-set-mbcs-support"></a>Supporto per set di caratteri Unicode e multibyte (MBCS)

Alcuni linguaggi, ad esempio, il giapponese e cinese, dispongono di set di caratteri di grandi dimensioni. Per supportare la programmazione per i mercati, Microsoft Foundation classe libreria (MFC) consente due diversi approcci alla gestione di set di caratteri di grandi dimensioni:

- [Unicode](#mfc-support-for-unicode-strings), `wchar_t` in base a caratteri wide e le stringhe codificate come UTF-16.

- [Set di caratteri multibyte (MBCS)](#mfc-support-for-mbcs-strings), `char` basato su stringhe codificate in un set di caratteri specifiche delle impostazioni internazionali e caratteri di singole o a byte doppio.

Microsoft consiglia le librerie MFC Unicode per tutte le nuove attività di sviluppo e le librerie MBCS sono state deprecate in Visual Studio 2013 e Visual Studio 2015. Questa procedura non è più necessaria. Gli avvisi di deprecazione di MBCS sono state rimosse in Visual Studio 2017.

## <a name="mfc-support-for-unicode-strings"></a>Supporto MFC per le stringhe Unicode

L'intera libreria di classi MFC in modo condizionale è abilitata per i caratteri Unicode e le stringhe archiviate in caratteri wide come UTF-16. In particolare, classe [CString](../atl-mfc-shared/reference/cstringt-class.md) è abilitata per Unicode.

Questi library, debugger e file DLL vengono utilizzati per il supporto Unicode in MFC:

|||||
|-|-|-|-|
|UAFXCW. LIB|UAFXCW. PDB|UAFXCWD. LIB|UAFXCWD. PDB|
|MFC*versione*U.LIB|MFC*versione*U.PDB|MFC*versione*U.DLL|MFC*versione*UD. LIB|
|MFC*versione*UD. PDB|MFC*versione*UD. DLL|MFCS*versione*U.LIB|MFCS*versione*U.PDB|
|MFCS*versione*UD. LIB|MFCS*versione*UD. PDB|MFCM*versione*U.LIB|MFCM*versione*U.PDB|
|MFCM*versione*U.DLL|MFCM*versione*UD. LIB|MFCM*versione*UD. PDB|MFCM*versione*UD. DLL|

(*versione* rappresenta il numero di versione del file; significa, ad esempio, '140' versione 14.0.)

`CString`si basa sul `TCHAR` tipo di dati. Se il simbolo `_UNICODE` è definito per una compilazione del programma, `TCHAR` è definito come tipo `wchar_t`, un tipo di codifica dei caratteri a 16 bit. In caso contrario, `TCHAR` è definito come `char`, la codifica di caratteri a 8 bit normale. Pertanto, in modalità Unicode, un `CString` è costituito da caratteri a 16 bit. Non Unicode, è composta da caratteri di tipo `char`.

Programmazione Unicode completo dell'applicazione, è inoltre necessario:

- Utilizzare il `_T` macro in modo condizionale le stringhe letterali sia portabile in Unicode.

- Quando si passano stringhe, prestare attenzione alla se gli argomenti della funzione richiedono una lunghezza in caratteri o una lunghezza in byte. La differenza è importante se si utilizzano le stringhe Unicode.

- Utilizzare le versioni portabili delle funzioni di gestione delle stringhe di runtime C.

- Per i caratteri e i puntatori a caratteri, utilizzare i tipi di dati seguenti:

   - Utilizzare `TCHAR` in cui si utilizzerebbe `char`.

   - Utilizzare `LPTSTR` in cui si utilizzerebbe `char*`.

   - Utilizzare `LPCTSTR` in cui si utilizzerebbe `const char*`. `CString`fornisce un operatore `LPCTSTR` per la conversione tra `CString` e `LPCTSTR`.

`CString`fornisce inoltre costruttori, gli operatori di assegnazione e operatori di confronto compatibili con Unicode.

Il [riferimenti alla libreria di Run-Time](../c-runtime-library/c-run-time-library-reference.md) definisce portabile versioni di tutte le funzioni di gestione delle stringhe. Per ulteriori informazioni, vedere la categoria [internazionali](../c-runtime-library/internationalization.md).

## <a name="mfc-support-for-mbcs-strings"></a>Supporto MFC per le stringhe MBCS

La libreria di classi è abilitata anche per i set di caratteri multibyte, ma solo per i caratteri a byte doppio (DBCS) di imposta.

In un set di caratteri multibyte, un carattere può essere uno o due byte. In caso di due byte, il primo byte è una speciale "byte di apertura" che è una scelta da un intervallo specifico, a seconda di quale codice pagina è in uso. Nel loro insieme, il responsabile e "byte di chiusura" specifica una codifica dei caratteri univoci.

Se il simbolo `_MBCS` è definito per una compilazione del programma, tipo `TCHAR`, in cui `CString` si basa, esegue il mapping a `char`. È responsabilità dell'utente per determinare quali byte di un `CString` sono byte di apertura e quali invece byte finale. La libreria di run-time C fornisce le funzioni che consentono di determinare questo.

In DBCS, una determinata stringa può contenere tutti i caratteri ANSI a byte singolo, tutti i caratteri DBCS o una combinazione dei due. Queste possibilità di richiedono un'attenzione speciale nelle analisi di stringhe. Ciò include `CString` oggetti.

> [!NOTE]
> La serializzazione della stringa Unicode in MFC è possibile leggere le stringhe Unicode e MBCS indipendentemente dalla versione dell'applicazione in cui è in esecuzione. I file di dati sono portabili tra le versioni di Unicode e MBCS del programma.

`CString`le funzioni membro utilizzare versioni speciali "testo generico" chiamano le funzioni di runtime C, o usano funzioni compatibili con Unicode. Pertanto, ad esempio, se un `CString` verrebbe in genere chiamata di funzione `strcmp`, chiama la funzione di testo generico corrispondente `_tcscmp` invece. A seconda di come i simboli `_MBCS` e `_UNICODE` sono definiti, `_tcscmp` esegue il mapping come indicato di seguito:

|||
|-|-|
|`_MBCS`definito|`_mbscmp`|
|`_UNICODE`definito|`wcscmp`|
|Nessun simbolo definito|`strcmp`|

> [!NOTE]
> I simboli `_MBCS` e `_UNICODE` si escludono a vicenda.

Vengono descritti i mapping di funzione di testo generico per tutte le routine di gestione delle stringhe in fase di esecuzione in [riferimento alla libreria di Run-Time C](../c-runtime-library/c-run-time-library-reference.md). Per un elenco, vedere [internazionali](../c-runtime-library/internationalization.md).

Analogamente, `CString` metodi vengono implementati tramite i mapping dei tipi di dati generici. Per abilitare MBCS e Unicode, MFC utilizza `TCHAR` per `char` o `wchar_t`, `LPTSTR` per `char*` o `wchar_t*`, e `LPCTSTR` per `const char*` o `const wchar_t*`. Ciò assicura il mapping corretto per MBCS o Unicode.

## <a name="see-also"></a>Vedere anche

[Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)  
[Modifica di stringhe](../c-runtime-library/string-manipulation-crt.md)  
