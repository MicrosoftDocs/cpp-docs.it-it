---
title: Supporto per set di caratteri Unicode e multibyte (MBCS)
ms.date: 01/09/2017
helpviewer_keywords:
- MFC [C++], character set support
- MBCS [C++], strings and MFC support
- strings [C++], MBCS support in MFC
- character sets [C++], multibyte
- Unicode [C++], MFC strings
- Unicode [C++], string objects
- strings [C++], Unicode
- strings [C++], character set support
ms.openlocfilehash: e1b93a3540cba553afd8f133c18496bddbd561b8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317443"
---
# <a name="unicode-and-multibyte-character-set-mbcs-support"></a>Supporto per set di caratteri Unicode e multibyte (MBCS)

Alcune lingue, ad esempio il giapponese e il cinese, hanno set di caratteri di grandi dimensioni. Per supportare la programmazione per questi mercati, la libreria MFC (Microsoft Foundation Class) consente due diversi approcci alla gestione di set di caratteri di grandi dimensioni:

- [Unicode](#mfc-support-for-unicode-strings) `wchar_t` , in base a caratteri wide e stringhe codificate come UTF-16.

- Set di [caratteri multibyte (MBCS),](#mfc-support-for-mbcs-strings)caratteri a byte singoli o doppi basati su **caratteri char** e stringhe codificate in un set di caratteri specifico delle impostazioni locali.

Microsoft ha consigliato le librerie Unicode MFC per tutti i nuovi sviluppi e le librerie MBCS sono state deprecate in Visual Studio 2013 e Visual Studio 2015. Questo non si verifica più. Gli avvisi di deprecazione MBCS sono stati rimossi in Visual Studio 2017.

## <a name="mfc-support-for-unicode-strings"></a>Supporto MFC per stringhe Unicode

L'intera libreria di classi MFC è abilitata in modo condizionale per i caratteri Unicode e le stringhe archiviate in caratteri wide come UTF-16. In particolare, la classe CString è abilitata per Unicode.In particular, class [CString](../atl-mfc-shared/reference/cstringt-class.md) is Unicode-enabled.

Questi file di libreria, debugger e DLL vengono utilizzati per supportare Unicode in MFC:

|||||
|-|-|-|-|
|UAFXCW. Lib|UAFXCW. Pdb|Controllo dell'utente. Lib|Controllo dell'utente. Pdb|
|Versione*version*MFC U.LIB|*Versione*MFC U.PDB|Versione*version*MFC U.DLL|Versione*version*MFC UD. Lib|
|Versione*version*MFC UD. Pdb|Versione*version*MFC UD. DLL (DLL)|MFCS*versione*U.LIB|MFCS*versione*U.PDB|
|MFCS*versione*UD. Lib|MFCS*versione*UD. Pdb|MFCM*versione*U.LIB|Versione*MFCM*U.PDB|
|Versione*MFCM*U.DLL|Versione*MFCM*UD. Lib|Versione*MFCM*UD. Pdb|Versione*MFCM*UD. DLL (DLL)|

*(versione* rappresenta il numero di versione del file; ad esempio, '140' indica la versione 14.0.)

`CString`si basa sul tipo di dati TCHAR. Se il simbolo _UNICODE è definito per una compilazione `wchar_t`del programma, TCHAR viene definito come tipo , un tipo di codifica dei caratteri a 16 bit. In caso contrario, TCHAR viene definito come **char**, la normale codifica dei caratteri a 8 bit. Pertanto, in `CString` Unicode, un è composto da caratteri a 16 bit. Senza Unicode, è composto da caratteri di tipo **char**.

Per completare la programmazione Unicode dell'applicazione, è inoltre necessario:

- Usare la macro _T per codificare in modo condizionale le stringhe letterali in modo che siano portabili in Unicode.Use the _T macro to conditionally code literal strings to be portable to Unicode.

- Quando si passano stringhe, prestare attenzione a se gli argomenti della funzione richiedono una lunghezza in caratteri o una lunghezza in byte. La differenza è importante se si utilizzano stringhe Unicode.

- Utilizzare versioni portabili delle funzioni di gestione delle stringhe di runtime del linguaggio C.

- Utilizzare i seguenti tipi di dati per i caratteri e i puntatori ai caratteri:

  - Utilizzare TCHAR in cui si utilizzerebbe **char**.

  - Utilizzare LPTSTR in cui si utilizzerebbe **char**<strong>\*</strong>.

  - Utilizzare LPCTSTR in cui si utilizzerebbe **const char**<strong>\*</strong>. `CString`fornisce l'operatore LPCTSTR da convertire tra `CString` e LPCTSTR.

`CString`fornisce inoltre costruttori, operatori di assegnazione e operatori di confronto che supportano Unicode.

Il [riferimento alla libreria](../c-runtime-library/c-run-time-library-reference.md) di runtime definisce le versioni portabili di tutte le relative funzioni di gestione delle stringhe. Per ulteriori informazioni, vedere la categoria [Internationalization](../c-runtime-library/internationalization.md).

## <a name="mfc-support-for-mbcs-strings"></a>Supporto MFC per stringhe MBCS

La libreria di classi è abilitata anche per i set di caratteri multibyte, ma solo per i set di caratteri a byte doppio (DBCS).

In un set di caratteri multibyte, un carattere può avere una larghezza di uno o due byte. Se è largo due byte, il primo byte è uno speciale "byte principale" scelto da un determinato intervallo, a seconda della tabella codici in uso. Nel loro insieme, il lead e i "byte finali" specificano una codifica dei caratteri univoca.

Se il simbolo _MBCS è definito per una compilazione `CString` del programma, digitare TCHAR, su cui è basato, esegue il mapping a **char**. Spetta all'utente determinare quali byte `CString` in un sono byte iniziali e quali sono i byte finali. La libreria di runtime del linguaggio C fornisce funzioni che consentono di determinare questo.

In DBCS, una determinata stringa può contenere tutti i caratteri ANSI a byte singolo, tutti i caratteri a byte doppio o una combinazione dei due. Queste possibilità richiedono particolare attenzione nell'analisi delle stringhe. Sono `CString` inclusi gli oggetti.

> [!NOTE]
> La serializzazione delle stringhe Unicode in MFC può leggere stringhe Unicode e MBCS indipendentemente dalla versione dell'applicazione in esecuzione. I file di dati sono portabili tra le versioni Unicode e MBCS del programma.

`CString`Le funzioni membro utilizzano versioni speciali "testo generico" delle funzioni di runtime del linguaggio C chiamate oppure utilizzano funzioni che commettono unicode Unicode. Pertanto, ad esempio, se `CString` `strcmp`una funzione in genere chiama `_tcscmp` , chiama invece la funzione di testo generico corrispondente. A seconda della modalità di `_tcscmp` definizione dei simboli _MBCS e _UNICODE, le mappe sono le seguenti:

|||
|-|-|
|_MBCS definito|`_mbscmp`|
|_UNICODE definito|`wcscmp`|
|Nessuno dei due simboli definito|`strcmp`|

> [!NOTE]
> I simboli _MBCS e _UNICODE si escludono a vicenda.

I mapping di funzioni di testo generico per tutte le routine di gestione delle stringhe in fase di esecuzione sono illustrati in Riferimenti alla [libreria di runtime del linguaggio C](../c-runtime-library/c-run-time-library-reference.md). Per un elenco, vedere [Internazionalizzazione](../c-runtime-library/internationalization.md).

Analogamente, `CString` i metodi vengono implementati utilizzando mapping di tipi di dati generici. Per abilitare sia MBCS che Unicode, `wchar_t`MFC utilizza TCHAR `wchar_t*`per **char** o , LPTSTR per **char** <strong>\*</strong> o , e LPCTSTR per **const char** <strong>\*</strong> o . `const wchar_t*` Questi assicurano i mapping corretti per MBCS o Unicode.

## <a name="see-also"></a>Vedere anche

[Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)<br/>
[Manipolazione delle stringheString Manipulation](../c-runtime-library/string-manipulation-crt.md)
