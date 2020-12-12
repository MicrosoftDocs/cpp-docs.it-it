---
description: 'Altre informazioni su: Generic-Text mapping in TCHAR. h'
title: Mapping di Generic-Text in TCHAR. h
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
ms.openlocfilehash: f083dc03eab7db25b54955d8d34a13f2b5b7197b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97118348"
---
# <a name="generic-text-mappings-in-tcharh"></a>Mapping di Generic-Text in TCHAR. h

Per semplificare il trasporto del codice per l'utilizzo internazionale, la libreria di runtime Microsoft fornisce mapping di testo generico specifici di Microsoft per molti tipi di dati, routine e altri oggetti. È possibile utilizzare questi mapping, definiti in TCHAR. h, per scrivere codice generico che può essere compilato per set di caratteri a byte singolo, multibyte o Unicode, a seconda di una costante del manifesto definita tramite un' `#define` istruzione. I mapping di testo generico sono estensioni Microsoft non compatibili con ANSI.

Utilizzando TCHAR. h, è possibile compilare applicazioni Unicode a un byte, set di caratteri multibyte (MBCS) e Unicode dalle stesse origini. TCHAR. h definisce le macro (che hanno il prefisso `_tcs` ) che, con le definizioni del preprocessore corrette, sono mappate alle `str` `_mbs` funzioni, o `wcs` , in base alle esigenze. Per compilare MBCS, definire il simbolo `_MBCS` . Per compilare Unicode, definire il simbolo `_UNICODE` . Per compilare un'applicazione a byte singolo, definire nessuno dei due (impostazione predefinita). Per impostazione predefinita, `_UNICODE` è definito per le applicazioni MFC.

Il `_TCHAR` tipo di dati viene definito in modo condizionale in TCHAR. h. Se il simbolo `_UNICODE` è definito per la compilazione, `_TCHAR` viene definito come **`wchar_t`** ; in caso contrario, per le compilazioni a byte singolo e MBCS, viene definito come **`char`** . **`wchar_t`** il tipo di dati a caratteri wide Unicode di base è la controparte a 16 bit di un valore a 8 bit **`signed char`** . Per le applicazioni internazionali, usare la `_tcs` famiglia di funzioni, che operano in `_TCHAR` unità, non in byte. Ad esempio, `_tcsncpy` Copia `n` `_TCHARs` , non `n` byte.

Poiché alcune funzioni di gestione delle stringhe SBCS (single byte character set) accettano parametri (con segno) **`char*`** , i risultati degli avvisi del compilatore non corrispondono quando `_MBCS` viene definito. Esistono tre modi per evitare questo avviso:

1. Usare i thunk di funzione inline indipendenti dai tipi in TCHAR. h. Comportamento predefinito.

1. Utilizzare le macro dirette in TCHAR. h definendo `_MB_MAP_DIRECT` nella riga di comando. In questo caso, è necessario abbinare manualmente i tipi. Questo è il metodo più veloce, ma non è indipendente dai tipi.

1. Usare i thunk della funzione della libreria collegata staticamente indipendente dai tipi in TCHAR. h. A tale scopo, definire la costante `_NO_INLINING` nella riga di comando. Questo è il metodo più lento, ma quello più indipendente dai tipi.

### <a name="preprocessor-directives-for-generic-text-mappings"></a>Direttive del preprocessore per i mapping di testo generico

|# define|Versione compilata|Esempio|
|---------------|----------------------|-------------|
|`_UNICODE`|Unicode (caratteri wide)|`_tcsrev` esegue il mapping a `_wcsrev`|
|`_MBCS`|Caratteri multibyte|`_tcsrev` esegue il mapping a `_mbsrev`|
|None (il valore predefinito non è `_UNICODE` né `_MBCS` definito)|SBCS (ASCII)|`_tcsrev` esegue il mapping a `strrev`|

Ad esempio, la funzione di testo generico `_tcsrev` , definita in TCHAR. h, viene mappata a `_mbsrev` se è stato definito `_MBCS` nel programma oppure a `_wcsrev` se è stato definito `_UNICODE` . In caso contrario, `_tcsrev` è mappata a `strrev`. Altri mapping dei tipi di dati sono disponibili in TCHAR. h per praticità di programmazione, ma `_TCHAR` è il più utile.

### <a name="generic-text-data-type-mappings"></a>Mapping dei tipi di dati di testo generico

|Generic-Text<br /> Nome del tipo di dati|_UNICODE &<br /> _MBCS non definito|_MBCS<br /> Definito|_UNICODE<br /> Definito|
|--------------------------------------|----------------------------------------|------------------------|---------------------------|
|`_TCHAR`|**`char`**|**`char`**|**`wchar_t`**|
|`_TINT`|**`int`**|**`unsigned int`**|`wint_t`|
|`_TSCHAR`|**`signed char`**|**`signed char`**|**`wchar_t`**|
|`_TUCHAR`|**`unsigned char`**|**`unsigned char`**|**`wchar_t`**|
|`_TXCHAR`|**`char`**|**`unsigned char`**|**`wchar_t`**|
|`_T` o `_TEXT`|Nessun effetto (rimosso dal preprocessore)|Nessun effetto (rimosso dal preprocessore)|`L` (converte il carattere o la stringa seguente nella relativa controparte Unicode)|

Per un elenco di mapping di testo generico di routine, variabili e altri oggetti, vedere [mapping di testo generico](../c-runtime-library/generic-text-mappings.md) in Run-Time Library Reference.

> [!NOTE]
> Non usare la `str` famiglia di funzioni con stringhe Unicode, che probabilmente contengono byte null incorporati. Analogamente, non usare la `wcs` famiglia di funzioni con stringhe MBCS (o SBCS).

Nei seguenti frammenti di codice viene illustrato l'utilizzo di `_TCHAR` e `_tcsrev` per il mapping a modelli MBSC, Unicode e SBCS.

```cpp
_TCHAR *RetVal, *szString;
RetVal = _tcsrev(szString);
```

Se `_MBCS` è stato definito, il preprocessore esegue il mapping del frammento al codice seguente:

```cpp
char *RetVal, *szString;
RetVal = _mbsrev(szString);
```

Se `_UNICODE` è stato definito, il preprocessore esegue il mapping del frammento al codice seguente:

```cpp
wchar_t *RetVal, *szString;
RetVal = _wcsrev(szString);
```

Se né `_MBCS` né `_UNICODE` sono stati definiti, il preprocessore esegue il mapping del frammento al codice ASCII a byte singolo, come segue:

```cpp
char *RetVal, *szString;
RetVal = strrev(szString);
```

Pertanto, è possibile scrivere, gestire e compilare un file di codice a origine singola per l'esecuzione con routine specifiche per uno dei tre tipi di set di caratteri.

## <a name="see-also"></a>Vedi anche

[Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)<br/>
[Uso di TCHAR. Tipi di dati H con codice _MBCS](../text/using-tchar-h-data-types-with-mbcs-code.md)
