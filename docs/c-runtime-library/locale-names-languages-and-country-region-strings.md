---
title: Nomi di impostazioni locali, lingue e stringhe relative a paese/area geografica | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- c.strings
dev_langs:
- C++
helpviewer_keywords:
- country/region strings
- localization, locale
- locales
- setlocale function
- language strings
ms.assetid: a0e5a0c5-5602-4da0-b65f-de3d6c8530a2
caps.latest.revision: 13
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Human Translation
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: 6f90a6a39d2f9a729d07d25e9f80d1ea9e26e1ee
ms.contentlocale: it-it
ms.lasthandoff: 04/04/2017

---
# <a name="locale-names-languages-and-countryregion-strings"></a>Nomi delle impostazioni locali, lingue e stringhe relative a paesi
L'argomento `locale` delle funzioni `setlocale` e `_create_locale` può essere impostato utilizzando i nomi delle impostazioni locali, le lingue, i codici paese e le tabelle codici supportati dall'API NLS di Windows. L'argomento `locale` assume il formato seguente:  
  
```  
locale :: "locale_name"  
        | "language[_country_region[.code_page]]"  
        | ".code_page"  
        | "C"  
        | ""  
        | NULL  
```  
  
 Il formato del nome delle impostazioni locali, ad esempio `en-US` per la lingua inglese (Stati Uniti) o `bs-Cyrl-BA` per la lingua bosniaca (Cirillico, Bosnia Erzegovina), è preferito. Il set dei nomi delle impostazioni locali è descritto nell'articolo relativo ai [nomi delle impostazioni locali](http://msdn.microsoft.com/library/windows/desktop/dd373814.aspx). Per un elenco dei nomi delle impostazioni locali supportati dalla versione del sistema operativo Windows, vedere la colonna dei **nomi delle impostazioni cultura** del [riferimento all'API NLS (National Language Support)](http://msdn.microsoft.com/goglobal/bb896001.aspx). Sono elencate le parti lingua, script e paese supportate dei nomi delle impostazioni locali. Per informazioni sui nomi delle impostazioni locali supportati che presentano ordinamenti non predefiniti, vedere la colonna dei **nomi delle impostazioni locali** nell'articolo relativo agli [identificatori di ordinamento](http://msdn.microsoft.com/library/windows/desktop/dd374060.aspx).  
  
 Il formato *language*[_*country_region*[.*code_page*]] viene archiviato nelle impostazioni locali di una categoria quando si usa una stringa lingua, o una stringa lingua e una stringa paese/area geografica, per creare le impostazioni locali. Il set delle stringhe lingua supportate è descritto in [Stringhe relative a lingue](../c-runtime-library/language-strings.md), mentre l'elenco delle stringhe relative a paesi/aree geografiche supportate è riportato in [Stringhe relative a paesi/aree geografiche](../c-runtime-library/country-region-strings.md). Se la lingua specificata non è associata al paese specificato, nelle impostazioni locali viene archiviata la lingua predefinita del paese specificato. Questo formato non è consigliabile per le stringhe delle impostazioni locali incorporate nel codice o serializzate nell'archiviazione perché tali stringhe hanno molte più probabilità di subire modifiche in seguito a un aggiornamento del sistema operativo rispetto al formato del nome delle impostazioni locali.  
  
 La tabella codici è la tabella codici ANSI/OEM associata alle impostazioni locali. La tabella codici viene determinata automaticamente quando le impostazioni locali vengono specificate in base alla lingua o alla lingua e al paese. Il valore speciale `.ACP` specifica la tabella codici ANSI per il paese/regione. Il valore speciale `.OCP` specifica la tabella codici OEM per il paese/regione. Se ad esempio si specifica `"Greek_Greece.ACP"` come valore delle impostazioni locali, queste ultime vengono archiviate come `Greek_Greece.1253` , vale a dire la tabella codici ANSI per la lingua greca. Se invece si specifica `"Greek_Greece.OCP"` , le impostazioni locali vengono archiviate come `Greek_Greece.737` , vale a dire la tabella codici OEM per la lingua greca. Per altre informazioni sulle tabelle codici, vedere [Tabelle codici](../c-runtime-library/code-pages.md). Per un elenco delle tabelle codici supportate in Windows, vedere l'articolo relativo agli [identificatori delle tabelle codici](http://msdn.microsoft.com/library/windows/desktop/dd317756.aspx).  
  
 Se si utilizza esclusivamente la tabella codici per specificare le impostazioni locali, vengono utilizzati il paese e la lingua predefinita del sistema. Se ad esempio si specifica `".1254"` (ANSI - Turco) come valore delle impostazioni locali in un sistema configurato per la lingua Inglese (Stati Uniti), le impostazioni locali vengono archiviate come `English_United States.1254`. Questo formato non è consigliabile perché potrebbe generare un comportamento non coerente.  
  
 Il valore `locale` di `C` specifica l'ambiente ANSI minimo per la conversione C. Le impostazioni locali di `C` presuppongono che ogni tipo di dati `char` sia 1 byte e il relativo valore sia sempre minore di 256. Se `locale` punta a una stringa vuota, le impostazioni locali corrispondono all'ambiente nativo definito in fase di implementazione.  
  
 È possibile specificare contemporaneamente tutte le categorie di impostazioni locali per le funzioni `setlocale` e `_wsetlocale` utilizzando la categoria `LC_ALL` . È possibile impostare le categorie sulle stesse impostazioni locali oppure impostare singolarmente ogni categoria utilizzando un argomento delle impostazioni locali con il formato seguente:  
  
```  
LC_ALL_specifier :: locale  
        | [LC_COLLATE=locale][;LC_CTYPE=locale][;LC_MONETARY=locale][;LC_NUMERIC=locale][;LC_TIME=locale]  
  
```  
  
 È possibile specificare più tipi di categoria, separati da punti e virgola. I tipi di categoria non specificati utilizzano le impostazioni locali correnti. Questo codice, ad esempio, imposta su `de-DE`le impostazioni locali correnti di tutte le categorie, quindi imposta le categorie `LC_MONETARY` su `en-GB` e le categorie `LC_TIME` su `es-ES`:  
  
 `_wsetlocale(LC_ALL, L"de-DE");`  
  
 `_wsetlocale(LC_ALL, L"LC_MONETARY=en-GB;LC_TIME=es-ES");`  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti della libreria di runtime C](../c-runtime-library/c-run-time-library-reference.md)   
 [_get_current_locale](../c-runtime-library/reference/get-current-locale.md)   
 [setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [_create_locale, _wcreate_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)   
 [Stringhe relative a lingue](../c-runtime-library/language-strings.md)   
 [Stringhe relative a paesi/aree geografiche](../c-runtime-library/country-region-strings.md)
