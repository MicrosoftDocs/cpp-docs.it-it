---
title: Mapping testo generico in Tchar. h | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- tchar.h
dev_langs:
- C++
helpviewer_keywords:
- mapping generic-text
- generic-text mappings [C++]
- character sets [C++], generic-text mappings
- Unicode [C++], generic-text mappings
- MBCS [C++], generic-text mappings
- TCHAR.H data types, mapping
- mappings [C++], TCHAR.H
ms.assetid: 01e1bb74-5a01-4093-8720-68b6c1fdda80
caps.latest.revision: 
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 405e95e9eb8fb760e2688e164178cf9270f31877
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="generic-text-mappings-in-tcharh"></a>Mappature di testo generico in Tchar.h
Per semplificare il trasporto del codice a livello internazionale, il [!INCLUDE[TLA#tla_ms](../text/includes/tlasharptla_ms_md.md)] libreria run-time fornisce [!INCLUDE[TLA#tla_ms](../text/includes/tlasharptla_ms_md.md)]-mapping testo generico specifiche per molti tipi di dati, routine e altri oggetti. È possibile utilizzare questi mapping, che sono definiti in Tchar. h, per scrivere codice generico che può essere compilato per il formato a byte singolo, multibyte o [!INCLUDE[TLA#tla_unicode](../atl-mfc-shared/reference/includes/tlasharptla_unicode_md.md)] set di caratteri, a seconda delle costanti manifesto definiti tramite un `#define` istruzione. Mapping testo generico sono [!INCLUDE[TLA#tla_ms](../text/includes/tlasharptla_ms_md.md)] estensioni che non sono [!INCLUDE[vcpransi](../atl-mfc-shared/reference/includes/vcpransi_md.md)] compatibile.  
  
 Tramite il TCHAR. h, è possibile compilare a byte singolo, impostare caratteri Multibyte (MBCS) e [!INCLUDE[TLA#tla_unicode](../atl-mfc-shared/reference/includes/tlasharptla_unicode_md.md)] applicazioni dalle stesse origini. Tchar. h definisce le macro (che dispongono del prefisso `_tcs`) che, con le definizioni del preprocessore corrette, eseguire il mapping a `str`, `_mbs`, o `wcs` funzioni, come appropriato. Per compilare applicazioni MBCS, definire il simbolo di `_MBCS`. Per compilare [!INCLUDE[TLA#tla_unicode](../atl-mfc-shared/reference/includes/tlasharptla_unicode_md.md)], definire il simbolo di `_UNICODE`. Per compilare un'applicazione a byte singolo, definire né (predefinito). Per impostazione predefinita, `_MBCS` è definito per le applicazioni MFC.  
  
 Il `_TCHAR` tipo di dati è definito in modo condizionale in Tchar. h. Se il simbolo `_UNICODE` è definito per la compilazione, `_TCHAR` è definito come `wchar_t`; in caso contrario, per le build MBCS e a byte singolo, è definito come `char`. (`wchar_t`, il tipo di dati di caratteri wide Unicode base, è a 16 bit equivalente a 8 bit firmato `char`.) Per le applicazioni internazionali, utilizzare il `_tcs` famiglia di funzioni che operano in `_TCHAR` unità, non in byte. Ad esempio, `_tcsncpy` copie `n` `_TCHARs`, non `n` byte.  
  
 Poiché alcune singolo Byte carattere impostare (SBCS) stringa funzioni di gestione (con segno) `char*` parametri, i risultati di avviso del compilatore un tipo mancata corrispondenza quando `_MBCS` è definito. Esistono tre modi per evitare questo avviso:  
  
1.  Utilizzare il thunk delle funzioni inline indipendenti dai tipi in Tchar. h. Comportamento predefinito.  
  
2.  Utilizzare le macro dirette in Tchar. h definendo `_MB_MAP_DIRECT` nella riga di comando. In questo caso, è necessario abbinare manualmente i tipi. Questo è il metodo più veloce, ma non è indipendente dai tipi.  
  
3.  Utilizzare il thunk delle funzioni di libreria collegata staticamente indipendente dai tipi in Tchar. h. A tale scopo, definire la costante `_NO_INLINING` nella riga di comando. Questo è il metodo più lento, ma quello più indipendente dai tipi.  
  
### <a name="preprocessor-directives-for-generic-text-mappings"></a>Direttive del preprocessore per i mapping di testo generico  
  
|# define|Versione compilata|Esempio|  
|---------------|----------------------|-------------|  
|`_UNICODE`|[!INCLUDE[TLA#tla_unicode](../atl-mfc-shared/reference/includes/tlasharptla_unicode_md.md)](caratteri wide)|`_tcsrev` viene mappata a `_wcsrev`|  
|`_MBCS`|Caratteri multibyte|`_tcsrev` viene mappata a `_mbsrev`|  
|Nessuno (il valore predefinito è Nessuno `_UNICODE` né `_MBCS` definito)|SBCS ([!INCLUDE[TLA#tla_ascii](../text/includes/tlasharptla_ascii_md.md)])|`_tcsrev` viene mappata a `strrev`|  
  
 Ad esempio, la funzione di testo generico `_tcsrev`, definito in Tchar. h, esegue il mapping a `_mbsrev` se è stata definita `_MBCS` nel programma, o a `_wcsrev` se è stato definito `_UNICODE`. In caso contrario, `_tcsrev` è mappata a `strrev`. Vengono forniti in Tchar. h altri mapping di tipo di dati per facilitare la programmazione, ma `_TCHAR` è estremamente utile.  
  
### <a name="generic-text-data-type-mappings"></a>Mapping dei tipi di dati di testo generico  
  
|Testo generico<br /><br /> Nome del tipo di dati|_UNICODE &<br /><br /> MBCS non definiti|_MBCS<br /><br /> Definito|_UNICODE<br /><br /> Definito|  
|--------------------------------------|----------------------------------------|------------------------|---------------------------|  
|`_TCHAR`|`char`|`char`|`wchar_t`|  
|`_TINT`|`int`|`unsigned int`|`wint_t`|  
|`_TSCHAR`|`signed char`|`signed char`|`wchar_t`|  
|`_TUCHAR`|`unsigned char`|`unsigned char`|`wchar_t`|  
|`_TXCHAR`|`char`|`unsigned char`|`wchar_t`|  
|`_T` o `_TEXT`|Nessun effetto (rimosso dal preprocessore)|Nessun effetto (rimosso dal preprocessore)|`L`(converte il carattere o la stringa seguente relativo [!INCLUDE[TLA#tla_unicode](../atl-mfc-shared/reference/includes/tlasharptla_unicode_md.md)] controparte)|  
  
 Per un elenco di mapping testo generico di routine, variabili e altri oggetti, vedere [mapping testo generico](../c-runtime-library/generic-text-mappings.md) in riferimenti alla libreria di Run-Time.  
  
> [!NOTE]
>  Non utilizzare il `str` famiglia di funzioni con le stringhe Unicode, che possa contenere byte null. Analogamente, non utilizzare il `wcs` famiglia di funzioni con le stringhe MBCS (o SBCS).  
  
 I frammenti di codice seguente viene illustrato l'utilizzo di `_TCHAR` e `_tcsrev` per il mapping a MBCS, [!INCLUDE[TLA#tla_unicode](../atl-mfc-shared/reference/includes/tlasharptla_unicode_md.md)]e i modelli SBCS.  
  
```  
_TCHAR *RetVal, *szString;  
RetVal = _tcsrev(szString);  
```  
  
 Se `_MBCS` è stato definito, il preprocessore esegue il mapping di questo frammento al codice:  
  
```  
char *RetVal, *szString;  
RetVal = _mbsrev(szString);  
```  
  
 Se `_UNICODE` è stato definito, il preprocessore esegue il mapping di questo frammento al codice:  
  
```  
wchar_t *RetVal, *szString;  
RetVal = _wcsrev(szString);  
```  
  
 Se non si specifica `_MBCS` né `_UNICODE` sono stati definiti, il preprocessore esegue il mapping il frammento a byte singolo [!INCLUDE[TLA#tla_ascii](../text/includes/tlasharptla_ascii_md.md)] codice, come indicato di seguito:  
  
```  
char *RetVal, *szString;  
RetVal = strrev(szString);  
```  
  
 Pertanto, è possibile scrivere, mantenere e compilare un file di codice sorgente di singolo per eseguirlo con routine siano per uno dei tre tipi di set di caratteri.  
  
## <a name="see-also"></a>Vedere anche  
 [Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)   
 [Uso dei tipi di dati di TCHAR.H con il codice _MBCS](../text/using-tchar-h-data-types-with-mbcs-code.md)