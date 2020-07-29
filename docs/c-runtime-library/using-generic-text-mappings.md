---
title: Utilizzo di mapping testo generico
ms.date: 11/04/2016
f1_keywords:
- _UNICODE
helpviewer_keywords:
- _TXCHAR type
- TINT type
- _TCHAR type
- TSCHAR type
- TEXT type
- TCHAR type
- TCHAR.H data types, mappings defined in
- generic-text data types
- _TINT type
- TUCHAR type
- _UNICODE constant
- TXCHAR type
- generic-text mappings
- _TSCHAR type
- T type
- mappings, generic-text
- _TUCHAR type
- MBCS data type
- _MBCS data type
- _TEXT type
- UNICODE constant
- _T type
ms.assetid: 2848121c-e51f-4b9b-a2e6-833ece4b0cb3
ms.openlocfilehash: f8616e0ff660b299544ed3c2f0a12feb4dbfe66b
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87221874"
---
# <a name="using-generic-text-mappings"></a>Utilizzo di mapping testo generico

**Specifico di Microsoft**

Per semplificare lo sviluppo di codice per vari mercati internazionali, la libreria di runtime di Microsoft fornisce mapping di testo generico specifiche di Microsoft per molti tipi di dati, routine e altri oggetti. I mapping sono definiti in TCHAR.H. È possibile utilizzare questi mapping di nomi per scrivere codice generico che può essere compilato per uno qualsiasi dei tre tipi di set di caratteri: ASCII (SBCS), MBCS o Unicode, in base a una costante di manifesto definita utilizzando un'istruzione `#define`. I mapping di testo generico sono estensioni Microsoft non compatibili con ANSI.

### <a name="preprocessor-directives-for-generic-text-mappings"></a>Direttive del preprocessore per i mapping di testo generico

|#define|Versione compilata|Esempio|
|--------------|----------------------|-------------|
|`_UNICODE`|Unicode (caratteri wide)|`_tcsrev` esegue il mapping a `_wcsrev`|
|`_MBCS`|Caratteri multibyte|`_tcsrev` esegue il mapping a `_mbsrev`|
|Nessuno. Questa è l'impostazione predefinita: non viene definito né `_UNICODE` né `_MBCS`.|SBCS (ASCII)|`_tcsrev` esegue il mapping a `strrev`|

Ad esempio, la funzione di testo generico `_tcsrev`, definita in TCHAR.H, viene mappata a `mbsrev` se nel programma è stata definita la versione `MBCS` oppure a `_wcsrev` se è stata definita la versione `_UNICODE`. In caso contrario, `_tcsrev` viene mappata a `strrev`.

Il tipo di dati di testo generico `_TCHAR` , anche definito in TCHAR. H, viene eseguito il mapping al tipo **`char`** se `_MBCS` è definito, al tipo **`wchar_t`** se `_UNICODE` è definito e al tipo **`char`** se nessuna costante è definita. Per facilitare la programmazione, vengono forniti in TCHAR.H altri mapping del tipo di dati, ma `_TCHAR` è il tipo più utile.

### <a name="generic-text-data-type-mappings"></a>Mapping dei tipi di dati di testo generico

|Nome del tipo di dati di testo generico|SBCS (_UNICODE, _MBCS non definiti)|_MBCS definito|_UNICODE definito|
|----------------------------------|--------------------------------------------|--------------------|-----------------------|
|`_TCHAR`|**`char`**|**`char`**|**`wchar_t`**|
|`_TINT`|**`int`**|**`int`**|`wint_t`|
|`_TSCHAR`|**`signed char`**|**`signed char`**|**`wchar_t`**|
|`_TUCHAR`|**`unsigned char`**|**`unsigned char`**|**`wchar_t`**|
|`_TXCHAR`|**`char`**|**`unsigned char`**|**`wchar_t`**|
|`_T` o `_TEXT`|Nessun effetto (rimosso dal preprocessore)|Nessun effetto (rimosso dal preprocessore)|`L` (converte il carattere o la stringa seguente nell'equivalente Unicode)|

Per un elenco completo dei mapping di testo generico di routine, variabili e altri oggetti, vedere [Mapping testo generico](../c-runtime-library/generic-text-mappings.md).

Nei seguenti frammenti di codice viene illustrato l'utilizzo di `_TCHAR` e `_tcsrev` per il mapping a modelli MBSC, Unicode e SBCS.

```
_TCHAR *RetVal, *szString;
RetVal = _tcsrev(szString);
```

Se `MBCS` è stato definito, il preprocessore esegue il mapping del frammento precedente al codice seguente:

```
char *RetVal, *szString;
RetVal = _mbsrev(szString);
```

Se `_UNICODE` è stato definito, il preprocessore esegue il mapping dello stesso frammento al codice seguente:

```
wchar_t *RetVal, *szString;
RetVal = _wcsrev(szString);
```

Se non è stato definito né `_MBCS` né `_UNICODE`, il preprocessore esegue il mapping del frammento al codice ASCII a byte singolo come segue:

```
char *RetVal, *szString;
RetVal = strrev(szString);
```

Pertanto, è possibile scrivere, mantenere e compilare un unico file di codice sorgente per eseguirlo con routine specifiche per uno dei tre tipi di set di caratteri.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Mapping di testo generico](../c-runtime-library/generic-text-mappings.md)<br/>
[Mapping dei tipi di dati](../c-runtime-library/data-type-mappings.md)<br/>
[Mapping di costanti e variabili globali](../c-runtime-library/constant-and-global-variable-mappings.md)<br/>
[Mapping di routine](../c-runtime-library/routine-mappings.md)<br/>
[Un programma di testo generico di esempio](../c-runtime-library/a-sample-generic-text-program.md)
