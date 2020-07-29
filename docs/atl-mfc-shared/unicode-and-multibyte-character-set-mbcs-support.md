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
ms.openlocfilehash: 217690e09ed595bb9fa9572693bf774259c42412
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87219027"
---
# <a name="unicode-and-multibyte-character-set-mbcs-support"></a>Supporto per set di caratteri Unicode e multibyte (MBCS)

Alcuni linguaggi, ad esempio giapponese e cinese, dispongono di set di caratteri di grandi dimensioni. Per supportare la programmazione per questi mercati, il libreria Microsoft Foundation Class (MFC) consente due approcci diversi per la gestione di set di caratteri di grandi dimensioni:

- [Unicode](#mfc-support-for-unicode-strings), **`wchar_t`** caratteri wide e stringhe basati su codificati come UTF-16.

- [Set di caratteri multibyte (MBCS)](#mfc-support-for-mbcs-strings), **`char`** caratteri a byte singolo o a doppio byte e stringhe codificate in un set di caratteri specifico delle impostazioni locali.

Microsoft ha raccomandato le librerie Unicode MFC per tutte le nuove attività di sviluppo e le librerie MBCS sono state deprecate in Visual Studio 2013 e Visual Studio 2015. Questa procedura non è più necessaria. Gli avvisi di deprecazione MBCS sono stati rimossi in Visual Studio 2017.

## <a name="mfc-support-for-unicode-strings"></a>Supporto MFC per stringhe Unicode

L'intera libreria di classi MFC è abilitata in modo condizionale per i caratteri Unicode e le stringhe archiviate in caratteri wide come UTF-16. In particolare, la classe [CString](../atl-mfc-shared/reference/cstringt-class.md) è abilitata per Unicode.

Questi file di libreria, debugger e DLL vengono utilizzati per supportare Unicode in MFC:

|||||
|-|-|-|-|
|UAFXCW. LIB|UAFXCW. PDB|UAFXCWD. LIB|UAFXCWD. PDB|
|*Versione*MFC U. lib|*Versione*MFC U. pdb|*Versione* MFCU.DLL|*Versione*MFC UD. LIB|
|*Versione*MFC UD. PDB|*Versione* MFCUD.DLL|MFC*versione*U. lib|MFC*versione*U. pdb|
|MFC*versione*UD. LIB|MFC*versione*UD. PDB|MFCM*versione*U. lib|MFCM*versione*U. pdb|
|U.DLL*versione* MFCM|MFCM*versione*UD. LIB|MFCM*versione*UD. PDB|UD.DLL*versione* MFCM|

(*Version* rappresenta il numero di versione del file. ad esempio,' 140' indica la versione 14,0).

`CString`è basato sul tipo di dati TCHAR. Se il simbolo _UNICODE viene definito per una compilazione del programma, TCHAR viene definito come tipo **`wchar_t`** , un tipo di codifica dei caratteri a 16 bit. In caso contrario, TCHAR viene definito come **`char`** , la normale codifica dei caratteri a 8 bit. Pertanto, in Unicode, un `CString` è costituito da caratteri a 16 bit. Senza Unicode, è costituito da caratteri di tipo **`char`** .

Per completare la programmazione Unicode dell'applicazione, è necessario anche:

- Usare la macro _T per codificare in modo condizionale le stringhe letterali da portabili a Unicode.

- Quando si passano le stringhe, prestare attenzione a se gli argomenti della funzione richiedono una lunghezza in caratteri o una lunghezza in byte. La differenza è importante se si utilizzano stringhe Unicode.

- Usare versioni portabili delle funzioni di gestione delle stringhe in fase di esecuzione del linguaggio C.

- Usare i tipi di dati seguenti per i caratteri e i puntatori a caratteri:

  - Utilizzare TCHAR in cui si utilizzerà **`char`** .

  - Utilizzare LPTSTR in cui si utilizzerà **`char`** <strong>\*</strong> .

  - Utilizzare LPCTSTR in cui si utilizzerà **const char** <strong>\*</strong> . `CString`fornisce l'operatore LPCTSTR per eseguire la conversione tra `CString` e LPCTSTR.

`CString`fornisce inoltre costruttori compatibili con Unicode, operatori di assegnazione e operatori di confronto.

Il [riferimento alla libreria di runtime](../c-runtime-library/c-run-time-library-reference.md) definisce le versioni portabili di tutte le funzioni di gestione delle stringhe. Per ulteriori informazioni, vedere [internazionalizzazione](../c-runtime-library/internationalization.md)delle categorie.

## <a name="mfc-support-for-mbcs-strings"></a>Supporto MFC per stringhe MBCS

La libreria di classi è inoltre abilitata per i set di caratteri multibyte, ma solo per i set di caratteri DBCS (Double-byte character set).

In una Multibyte Character Set, un carattere può essere costituito da una o due byte di larghezza. Se la larghezza è di due byte, il primo byte è un "byte di apertura" speciale scelto da un intervallo specifico, a seconda della tabella codici in uso. Insieme, i lead e i "byte finali" specificano una codifica dei caratteri univoca.

Se il simbolo _MBCS viene definito per una compilazione del programma, digitare TCHAR, su cui `CString` si basa, esegue il mapping a **`char`** . È necessario determinare quali byte in un `CString` sono i byte iniziali e quali sono i byte finali. La libreria di runtime del linguaggio C fornisce funzioni che consentono di determinare questo problema.

In DBCS, una determinata stringa può contenere tutti i caratteri ANSI a byte singolo, tutti i caratteri a byte doppio o una combinazione dei due. Queste possibilità richiedono particolare attenzione nell'analisi delle stringhe. Sono inclusi `CString` gli oggetti.

> [!NOTE]
> La serializzazione di stringhe Unicode in MFC può leggere sia le stringhe Unicode sia quelle MBCS indipendentemente dalla versione dell'applicazione in esecuzione. I file di dati sono portabili tra le versioni Unicode e MBCS del programma.

`CString`le funzioni membro usano versioni speciali "testo generico" delle funzioni di runtime C che chiamano o usano funzioni compatibili con Unicode. Pertanto, ad esempio, se una `CString` funzione chiama in genere `strcmp` , chiama la funzione di testo generico corrispondente `_tcscmp` . A seconda del modo in cui vengono definiti i simboli _MBCS e _UNICODE, viene eseguito il `_tcscmp` mapping come segue:

|||
|-|-|
|_MBCS definito|`_mbscmp`|
|_UNICODE definito|`wcscmp`|
|Nessun simbolo definito|`strcmp`|

> [!NOTE]
> I simboli _MBCS e _UNICODE si escludono a vicenda.

I mapping delle funzioni di testo generico per tutte le routine di gestione delle stringhe in fase di esecuzione sono descritti in [riferimenti alla libreria di runtime C](../c-runtime-library/c-run-time-library-reference.md). Per un elenco, vedere [internazionalizzazione](../c-runtime-library/internationalization.md).

Analogamente, `CString` i metodi vengono implementati usando mapping di tipi di dati generici. Per abilitare sia MBCS che Unicode, MFC utilizza TCHAR per **`char`** o **`wchar_t`** , LPTSTR per **`char`** <strong>\*</strong> o `wchar_t*` e LPCTSTR per **const char** <strong>\*</strong> o `const wchar_t*` . Che garantiscono i mapping corretti per MBCS o Unicode.

## <a name="see-also"></a>Vedere anche

[Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)<br/>
[Manipolazione di stringhe](../c-runtime-library/string-manipulation-crt.md)
