---
title: Funzioni vprintf | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apilocation:
- msvcr110.dll
- msvcr120.dll
- msvcr90.dll
- msvcr100.dll
- msvcr110_clr0400.dll
- msvcr80.dll
apitype: DLLExport
f1_keywords: vprintf
dev_langs: C++
helpviewer_keywords:
- vprintf function
- formatted text [C++]
ms.assetid: 02ac7c51-eab1-4bf0-bf4c-77065e3fa744
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 1a888f46912aaa5292e9bcf1f83bc3e6926f73d2
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="vprintf-functions"></a>Funzioni vprintf
Ognuna delle funzioni `vprintf` accetta un puntatore a un elenco di argomenti e quindi formatta e scrive i dati specificati in una destinazione particolare. Le funzioni differiscono per il tipo di convalida dei parametri eseguita, per l'uso di stringhe di caratteri di tipo wide o a byte singolo, per la destinazione di output e per il modo in cui viene specificato l'ordine in cui i parametri vengono usati nella stringa di formato.  
  
|||  
|-|-|  
|[_vcprintf, _vcwprintf](../c-runtime-library/reference/vcprintf-vcprintf-l-vcwprintf-vcwprintf-l.md)|[vfprintf, vfwprintf](../c-runtime-library/reference/vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md)|  
|[_vfprintf_p, _vfprintf_p_l, _vfwprintf_p, _vfwprintf_p_l](../c-runtime-library/reference/vfprintf-p-vfprintf-p-l-vfwprintf-p-vfwprintf-p-l.md)|[vfprintf_s, _vfprintf_s_l, vfwprintf_s, _vfwprintf_s_l](../c-runtime-library/reference/vfprintf-s-vfprintf-s-l-vfwprintf-s-vfwprintf-s-l.md)|  
|[vprintf, vwprintf](../c-runtime-library/reference/vprintf-vprintf-l-vwprintf-vwprintf-l.md)|[_vprintf_p, _vprintf_p_l, _vwprintf_p, _vwprintf_p_l](../c-runtime-library/reference/vprintf-p-vprintf-p-l-vwprintf-p-vwprintf-p-l.md)|  
|[vprintf_s, _vprintf_s_l, vwprintf_s, _vwprintf_s_l](../c-runtime-library/reference/vprintf-s-vprintf-s-l-vwprintf-s-vwprintf-s-l.md)|[vsprintf, vswprintf](../c-runtime-library/reference/vsprintf-vsprintf-l-vswprintf-vswprintf-l-vswprintf-l.md)|  
|[_vsprintf_p, _vsprintf_p_l, _vswprintf_p, _vswprintf_p_l](../c-runtime-library/reference/vsprintf-p-vsprintf-p-l-vswprintf-p-vswprintf-p-l.md)|[vsprintf_s, _vsprintf_s_l, vswprintf_s, _vswprintf_s_l](../c-runtime-library/reference/vsprintf-s-vsprintf-s-l-vswprintf-s-vswprintf-s-l.md)|  
|[_vscprintf, _vscprintf_l, _vscwprintf, _vscwprintf_l](../c-runtime-library/reference/vscprintf-vscprintf-l-vscwprintf-vscwprintf-l.md)|[_vsnprintf, _vsnwprintf](../c-runtime-library/reference/vsnprintf-vsnprintf-vsnprintf-l-vsnwprintf-vsnwprintf-l.md)|  
  
## <a name="remarks"></a>Note  
 Le funzioni `vprintf` sono simili alle loro controparti, come indicato nella tabella seguente. Tuttavia, ogni funzione `vprintf` accetta un puntatore a una lista di argomenti, mentre ognuna delle funzioni corrispondenti accetta un elenco di argomenti.  
  
 Queste funzioni consentono di formattare i dati per l'output verso le destinazioni, come indicato di seguito.  
  
|Funzione|Funzione controparte|Destinazione di output|Convalida dei parametri|Supporto parametro posizionale|  
|--------------|--------------------------|------------------------|--------------------------|----------------------------------|  
|`_vcprintf`|[_cprintf](../c-runtime-library/reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md)|console|Controllo dei valori null.|no|  
|`_vcwprintf`|[_cwprintf](../c-runtime-library/reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md)|console|Controllo dei valori null.|no|  
|`vfprintf`|[fprintf](../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)|*Stream*|Controllo dei valori null.|no|  
|**vfprintf_p**|[fprintf_p](../c-runtime-library/reference/fprintf-p-fprintf-p-l-fwprintf-p-fwprintf-p-l.md)|*Stream*|Controllo dei valori null e del formato valido.|sì|  
|`vfprintf_s`|[fprintf_s](../c-runtime-library/reference/fprintf-s-fprintf-s-l-fwprintf-s-fwprintf-s-l.md)|*Stream*|Controllo dei valori null e del formato valido.|no|  
|`vfwprintf`|[fwprintf](../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)|*Stream*|Controllo dei valori null.|no|  
|**vfwprintf_p**|[fwprintf_p](../c-runtime-library/reference/fprintf-p-fprintf-p-l-fwprintf-p-fwprintf-p-l.md)|*Stream*|Controllo dei valori null e del formato valido.|sì|  
|`vfwprintf_s`|[fwprintf_s](../c-runtime-library/reference/fprintf-s-fprintf-s-l-fwprintf-s-fwprintf-s-l.md)|*Stream*|Controllo dei valori null e del formato valido.|no|  
|`vprintf`|[printf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)|`Stdout`|Controllo dei valori null.|no|  
|**vprintf_p**|[printf_p](../c-runtime-library/reference/printf-p-printf-p-l-wprintf-p-wprintf-p-l.md)|`Stdout`|Controllo dei valori null e del formato valido.|sì|  
|`vprintf_s`|[printf_s](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)|`Stdout`|Controllo dei valori null e del formato valido.|no|  
|`vwprintf`|[wprintf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)|`Stdout`|Controllo dei valori null.|no|  
|**vwprintf_p**|[wprintf_p](../c-runtime-library/reference/printf-p-printf-p-l-wprintf-p-wprintf-p-l.md)|`Stdout`|Controllo dei valori null e del formato valido.|sì|  
|`vwprintf_s`|[wprintf_s](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)|`Stdout`|Controllo dei valori null e del formato valido.|no|  
|**vsprintf**|[sprintf](../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)|memoria a cui punta *buffer*|Controllo dei valori null.|no|  
|**vsprintf_p**|[sprintf_p](../c-runtime-library/reference/sprintf-p-sprintf-p-l-swprintf-p-swprintf-p-l.md)|memoria a cui punta *buffer*|Controllo dei valori null e del formato valido.|sì|  
|`vsprintf_s`|[sprintf_s](../c-runtime-library/reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md)|memoria a cui punta *buffer*|Controllo dei valori null e del formato valido.|no|  
|`vswprintf`|[swprintf](../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)|memoria a cui punta *buffer*|Controllo dei valori null.|no|  
|**vswprintf_p**|[swprintf_p](../c-runtime-library/reference/sprintf-p-sprintf-p-l-swprintf-p-swprintf-p-l.md)|memoria a cui punta *buffer*|Controllo dei valori null e del formato valido.|sì|  
|`vswprintf_s`|[swprintf_s](../c-runtime-library/reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md)|memoria a cui punta *buffer*|Controllo dei valori null e del formato valido.|no|  
|`_vscprintf`|[_vscprintf](../c-runtime-library/reference/vscprintf-vscprintf-l-vscwprintf-vscwprintf-l.md)|memoria a cui punta *buffer*|Controllo dei valori null.|no|  
|`_vscwprintf`|[_vscwprintf](../c-runtime-library/reference/vscprintf-vscprintf-l-vscwprintf-vscwprintf-l.md)|memoria a cui punta *buffer*|Controllo dei valori null.|no|  
|`_vsnprintf`|[_snprintf](../c-runtime-library/reference/snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md)|memoria a cui punta *buffer*|Controllo dei valori null.|no|  
|`_vsnwprintf`|[_snwprintf](../c-runtime-library/reference/snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md)|memoria a cui punta *buffer*|Controllo dei valori null.|no|  
  
 L'argomento `argptr` è di tipo `va_list`, definito in VARARGS.H e in STDARG.H. La variabile `argptr` deve essere inizializzata da **va_start** e può essere reinizializzata da chiamate successive di `va_arg`. `argptr` quindi punterà all'inizio di un elenco di argomenti che vengono convertiti e trasmessi in output in base alle specifiche corrispondenti nell'argomento *format*. *format* ha la stessa forma e la stessa funzione dell'argomento *format* di [printf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md). Nessuna di queste funzioni chiama `va_end`. Per una descrizione più completa di ogni funzione `vprintf`, vedere la descrizione della funzione corrispondente come indicato nella tabella precedente.  
  
 `_vsnprintf` differisce da **vsprintf** in quanto non scrive più di *count* byte in *buffer*.  
  
 Le versioni di queste funzioni con l'infisso **w** nel nome sono versioni a caratteri wide delle corrispondenti funzioni senza l'infisso **w**. In ognuna di queste funzioni a caratteri di tipo wide, *buffer* e *format* sono stringhe a caratteri wide. Ogni altra funzione a caratteri wide si comporta in modo identico alla funzione SBCS corrispondente.  
  
 Le versioni di queste funzioni con suffissi **_s** e **_p** sono le versioni più sicure. Queste versioni convalidano le stringhe di formato e generano un'eccezione se la stringa di formato non è ben formata, ad esempio se vengono usati caratteri di formattazione non validi.  
  
 Le versioni di queste funzioni con il suffisso **_p** consentono di specificare l'ordine in cui gli argomenti forniti vengono sostituiti nella stringa di formato. Per altre informazioni, vedere [printf_p Positional Parameters](../c-runtime-library/printf-p-positional-parameters.md) (Parametri posizionali printf_p).  
  
 Per **vsprintf**, `vswprintf`, `_vsnprintf` e `_vsnwprintf`, se si verifica una copia tra stringhe che si sovrappongono, il comportamento non è definito.  
  
> [!IMPORTANT]
>  Assicurarsi che *format* non sia una stringa definita dall'utente. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795). Se si usano le versioni sicure di queste funzioni, con il suffisso **_s** o **_p**, e la stringa di formato specificata dall'utente contiene caratteri di formattazione non validi, potrebbe verificarsi un'eccezione di parametro non valido.  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../c-runtime-library/stream-i-o.md)   
 [fprintf, _fprintf_l, fwprintf, _fwprintf_l](../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)   
 [printf, _printf_l, wprintf, _wprintf_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)   
 [va_arg, va_copy, va_end, va_start](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)