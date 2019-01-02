---
title: Mapping testo generico in Tchar. h
ms.date: 11/04/2016
f1_keywords:
- tchar.h
helpviewer_keywords:
- mapping generic-text
- generic-text mappings [C++]
- character sets [C++], generic-text mappings
- Unicode [C++], generic-text mappings
- MBCS [C++], generic-text mappings
- TCHAR.H data types, mapping
- mappings [C++], TCHAR.H
ms.assetid: 01e1bb74-5a01-4093-8720-68b6c1fdda80
ms.openlocfilehash: 59df523cc553881186921a878d131a109ae3cf27
ms.sourcegitcommit: fe1e21df175cd004d21c6e4659082efceb649a8b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/02/2019
ms.locfileid: "53978296"
---
# <a name="generic-text-mappings-in-tcharh"></a>Mapping testo generico in Tchar. h

Per semplificare il trasporto del codice per l'uso internazionale, la libreria di runtime Microsoft fornisce mapping testo generico specifiche di Microsoft per molti tipi di dati, routine e altri oggetti. È possibile usare questi mapping, che sono definiti in Tchar. h, per scrivere codice generico che può essere compilato per il formato a byte singolo, multibyte o set di caratteri Unicode, a seconda di una costante di manifesto definita utilizzando un `#define` istruzione. I mapping di testo generico sono estensioni Microsoft non compatibili con ANSI.

Utilizzando il TCHAR. h, è possibile compilare applicazioni Unicode dalle stesse origini a byte singolo e Set di caratteri Multibyte (MBCS). Tchar. h definisce le macro (che hanno il prefisso `_tcs`) che, con le definizioni del preprocessore corrette, eseguire il mapping a `str`, `_mbs`, o `wcs` funzioni, come appropriato. Per compilare applicazioni MBCS, definire il simbolo `_MBCS`. Per compilare Unicode, definire il simbolo `_UNICODE`. Per compilare un'applicazione a un byte, definire nessuno (predefinito). Per impostazione predefinita, `_UNICODE` è definito per le applicazioni MFC.

Il `_TCHAR` tipo di dati è definito in modo condizionale in Tchar. h. Se il simbolo `_UNICODE` è definito per la compilazione `_TCHAR` viene definito come **wchar_t**; in caso contrario, per un byte SBCS e MBCS compilazioni, viene definito come **char**. (**wchar_t**, il tipo di dati di caratteri wide Unicode base è l'equivalente di 16 bit a un con segno a 8 bit **char**.) Per le applicazioni interne, usare il `_tcs` famiglia di funzioni che operano in `_TCHAR` unità, non byte. Ad esempio, `_tcsncpy` copie `n` `_TCHARs`, non `n` byte.

Poiché alcune singolo Byte carattere impostato (SBCS) stringa-funzioni di gestione (con segno) `char*` parametri, verrà restituito avviso del compilatore mancata corrispondenza tra un tipo quando `_MBCS` è definito. Esistono tre modi per evitare questo avviso:

1. Usare il thunk delle funzioni inline indipendenti dai tipi in Tchar. h. Comportamento predefinito.

1. Usare le macro dirette in Tchar. h definendo `_MB_MAP_DIRECT` nella riga di comando. In questo caso, è necessario abbinare manualmente i tipi. Questo è il metodo più veloce, ma non è indipendente dai tipi.

1. Usare il thunk delle funzioni della libreria collegata staticamente indipendente dai tipi in Tchar. h. A tale scopo, definire la costante `_NO_INLINING` nella riga di comando. Questo è il metodo più lento, ma quello più indipendente dai tipi.

### <a name="preprocessor-directives-for-generic-text-mappings"></a>Direttive del preprocessore per i mapping di testo generico

|# define|Versione compilata|Esempio|
|---------------|----------------------|-------------|
|`_UNICODE`|Unicode (caratteri wide)|`_tcsrev` viene mappata a `_wcsrev`|
|`_MBCS`|Caratteri multibyte|`_tcsrev` viene mappata a `_mbsrev`|
|Nessuno (il valore predefinito non dispone `_UNICODE` né `_MBCS` definito)|SBCS (ASCII)|`_tcsrev` viene mappata a `strrev`|

Ad esempio, la funzione di testo generico `_tcsrev`, definito in Tchar. h, esegue il mapping a `_mbsrev` se è stato definito `_MBCS` nel programma, o al `_wcsrev` se è stato definito `_UNICODE`. In caso contrario, `_tcsrev` è mappata a `strrev`. Altri mapping dei tipi di dati forniti in Tchar. h per facilitare la programmazione, ma `_TCHAR` è estremamente utile.

### <a name="generic-text-data-type-mappings"></a>Mapping dei tipi di dati di testo generico

|Testo generico<br /> Nome del tipo di dati|_UNICODE &<br /> MBCS non definiti|_MBCS<br /> Definito|_UNICODE<br /> Definito|
|--------------------------------------|----------------------------------------|------------------------|---------------------------|
|`_TCHAR`|**char**|**char**|**wchar_t**|
|`_TINT`|**int**|**unsigned int**|`wint_t`|
|`_TSCHAR`|**char con segno**|**char con segno**|**wchar_t**|
|`_TUCHAR`|**unsigned char**|**unsigned char**|**wchar_t**|
|`_TXCHAR`|**char**|**unsigned char**|**wchar_t**|
|`_T` o `_TEXT`|Nessun effetto (rimosso dal preprocessore)|Nessun effetto (rimosso dal preprocessore)|`L` (converte il carattere o la stringa seguente equivalente Unicode)|

Per un elenco di mapping testo generico di routine, variabili e altri oggetti, vedere [mapping testo generico](../c-runtime-library/generic-text-mappings.md) nel riferimento alla libreria Run-Time.

> [!NOTE]
>  Non usare il `str` famiglia di funzioni con le stringhe Unicode, che possono contenere byte null. Analogamente, non usare il `wcs` della famiglia di funzioni con le stringhe (MBCS o SBCS).

Nei seguenti frammenti di codice viene illustrato l'utilizzo di `_TCHAR` e `_tcsrev` per il mapping a modelli MBSC, Unicode e SBCS.

```cpp
_TCHAR *RetVal, *szString;
RetVal = _tcsrev(szString);
```

Se `_MBCS` è stato definito, il preprocessore esegue il mapping di questo frammento al codice:

```cpp
char *RetVal, *szString;
RetVal = _mbsrev(szString);
```

Se `_UNICODE` è stato definito, il preprocessore esegue il mapping di questo frammento al codice:

```cpp
wchar_t *RetVal, *szString;
RetVal = _wcsrev(szString);
```

Se nessuno di essi `_MBCS` né `_UNICODE` sono stati definiti, il preprocessore esegue il mapping nel frammento al codice ASCII a byte singolo, come indicato di seguito:

```cpp
char *RetVal, *szString;
RetVal = strrev(szString);
```

Pertanto, è possibile scrivere, mantenere e compilare un file di codice sorgente di singola per eseguirlo con routine specifiche per uno qualsiasi dei tre tipi di set di caratteri.

## <a name="see-also"></a>Vedere anche

[Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)<br/>
[Uso dei tipi di dati di TCHAR.H con il codice _MBCS](../text/using-tchar-h-data-types-with-mbcs-code.md)
