---
title: Mapping di testo generico in tchar.h
ms.date: 11/04/2016
helpviewer_keywords:
- mapping generic-text
- generic-text mappings [C++]
- character sets [C++], generic-text mappings
- Unicode [C++], generic-text mappings
- MBCS [C++], generic-text mappings
- TCHAR.H data types, mapping
- mappings [C++], TCHAR.H
ms.assetid: 01e1bb74-5a01-4093-8720-68b6c1fdda80
ms.openlocfilehash: bf872df2e6fb49e64a973e8799eef98dec1cb472
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81361349"
---
# <a name="generic-text-mappings-in-tcharh"></a>Mapping di testo generico in tchar.h

Per semplificare il trasporto di codice per uso internazionale, la libreria di runtime Microsoft fornisce mapping di testo generico specifici di Microsoft per molti tipi di dati, routine e altri oggetti. È possibile utilizzare questi mapping, definiti in tchar.h, per scrivere codice generico che può essere compilato per set di caratteri a `#define` byte singolo, multibyte o Unicode, a seconda di una costante di manifesto definita tutilizzando un'istruzione. I mapping di testo generico sono estensioni Microsoft non compatibili con ANSI.

Utilizzando tchar.h, è possibile compilare applicazioni a byte singolo, mbCS (Multibyte Character Set) e Unicode dalle stesse origini. `_tcs`tchar.h definisce le macro (che hanno il prefisso ) che, con le definizioni corrette del preprocessore, eseguono il mapping a `str`, `_mbs`, o `wcs` funzioni, in base alle esigenze. Per costruire MBCS, `_MBCS`definire il simbolo . Per compilare Unicode, `_UNICODE`definire il simbolo . Per compilare un'applicazione a byte singolo, non definire nessuno dei due (impostazione predefinita). Per impostazione predefinita, `_UNICODE` è definito per le applicazioni MFC.

Il `_TCHAR` tipo di dati è definito in modo condizionale in tchar.h. Se il `_UNICODE` simbolo è definito `_TCHAR` per la compilazione, è definito come **wchar_t**; in caso contrario, per le compilazioni a byte singolo e MBCS, viene definito come **char**. **(wchar_t**, il tipo di dati Unicode wide-character di base, è la controparte a 16 bit di un **carattere**con segno a 8 bit .) Per le applicazioni `_tcs` internazionali, utilizzare la `_TCHAR` famiglia di funzioni, che operano in unità, non byte. `_tcsncpy` Ad esempio, `n` `_TCHARs`le `n` copie , non i byte.

Poiché alcune funzioni di gestione delle stringhe SBCS `char*` (Single Byte Character Set) accettano parametri (con segno), quando `_MBCS` viene definito un avviso del compilatore di mancata corrispondenza dei tipi. Esistono tre modi per evitare questo avviso:There are three ways to avoid this warning:

1. Utilizzare i thunk della funzione inline indipendente dai tipi in tchar.h. Questo è il comportamento predefinito.

1. Utilizzare le macro dirette in tchar.h definendo `_MB_MAP_DIRECT` nella riga di comando. In questo caso, è necessario abbinare manualmente i tipi. Questo è il metodo più veloce, ma non è indipendente dai tipi.

1. Utilizzare i thunk della funzione di libreria collegata in modo statico indipendente in tchar.h. A tale scopo, definire la costante `_NO_INLINING` nella riga di comando. Questo è il metodo più lento, ma quello più indipendente dai tipi.

### <a name="preprocessor-directives-for-generic-text-mappings"></a>Direttive del preprocessore per i mapping di testo generico

|: definire|Versione compilata|Esempio|
|---------------|----------------------|-------------|
|`_UNICODE`|Unicode (caratteri wide)|`_tcsrev` viene mappata a `_wcsrev`|
|`_MBCS`|Caratteri multibyte|`_tcsrev` viene mappata a `_mbsrev`|
|Nessuno (l'impostazione `_UNICODE` `_MBCS` predefinita non ha né definito)|SBCS (ASCII)|`_tcsrev` viene mappata a `strrev`|

Ad esempio, la funzione `_tcsrev`di testo generico , definita `_mbsrev` in tchar.h, esegue il mapping a se definita `_MBCS` nel programma o a `_wcsrev` se è stata definita `_UNICODE`. In caso contrario, `_tcsrev` è mappata a `strrev`. Altri mapping dei tipi di dati sono forniti in `_TCHAR` tchar.h per comodità di programmazione, ma è il più utile.

### <a name="generic-text-data-type-mappings"></a>Mapping dei tipi di dati di testo generico

|Testo generico<br /> Nome tipo di dati|& _UNICODE<br /> _MBCS non definito|_MBCS<br /> Definito|_UNICODE<br /> Definito|
|--------------------------------------|----------------------------------------|------------------------|---------------------------|
|`_TCHAR`|**char**|**char**|**wchar_t**|
|`_TINT`|**Int**|**int senza segno**|`wint_t`|
|`_TSCHAR`|**signed char**|**signed char**|**wchar_t**|
|`_TUCHAR`|**unsigned char**|**unsigned char**|**wchar_t**|
|`_TXCHAR`|**char**|**unsigned char**|**wchar_t**|
|`_T` o `_TEXT`|Nessun effetto (rimosso dal preprocessore)|Nessun effetto (rimosso dal preprocessore)|`L`(converte il carattere o la stringa seguente nella relativa controparte Unicode)|

Per un elenco dei mapping di testo generico di routine, variabili e altri oggetti, vedere [Mapping di testo generico](../c-runtime-library/generic-text-mappings.md) in Riferimenti alla libreria di runtime.

> [!NOTE]
> Non utilizzare `str` la famiglia di funzioni con stringhe Unicode, che probabilmente contengono byte null incorporati. Analogamente, non `wcs` utilizzare la famiglia di funzioni con stringhe MBCS (o SBCS).

Nei seguenti frammenti di codice viene illustrato l'utilizzo di `_TCHAR` e `_tcsrev` per il mapping a modelli MBSC, Unicode e SBCS.

```cpp
_TCHAR *RetVal, *szString;
RetVal = _tcsrev(szString);
```

Se `_MBCS` è stato definito, il preprocessore esegue il mapping di questo frammento a questo codice:If has been defined, the preprocessor maps this fragment to this code:

```cpp
char *RetVal, *szString;
RetVal = _mbsrev(szString);
```

Se `_UNICODE` è stato definito, il preprocessore esegue il mapping di questo frammento a questo codice:If has been defined, the preprocessor maps this fragment to this code:

```cpp
wchar_t *RetVal, *szString;
RetVal = _wcsrev(szString);
```

Se `_MBCS` non `_UNICODE` è stato definito né, il preprocessore esegue il mapping del frammento al codice ASCII a byte singolo, come indicato di seguito:

```cpp
char *RetVal, *szString;
RetVal = strrev(szString);
```

Pertanto, è possibile scrivere, gestire e compilare un singolo file di codice sorgente da eseguire con routine specifiche di uno dei tre tipi di set di caratteri.

## <a name="see-also"></a>Vedere anche

[Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)<br/>
[Utilizzo dei tipi di dati di TCHAR.H con il codice _MBCS](../text/using-tchar-h-data-types-with-mbcs-code.md)
