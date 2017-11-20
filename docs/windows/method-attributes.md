---
title: Gli attributi del metodo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords:
- method attributes
- attributes [C++], reference topics
ms.assetid: b2313352-480d-488b-8c35-6242ffd3a549
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: a8b6a0cdecc5a0416873ba5bed3eba043a2ef79a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="method-attributes"></a>Attributi del metodo
Gli attributi seguenti si applicano ai metodi in una classe, una coclasse o interfaccia.  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|[bindable](../windows/bindable.md)|Indica che la proprietà supporta l'associazione dati.|  
|[call_as](../windows/call-as.md)|Consente a una funzione nonremotable può essere mappata a una funzione remota.|  
|[personalizzato](../windows/custom-cpp.md)|Consente di definire un attributo personalizzato.|  
|[db_column](../windows/db-column.md)|Associa una colonna specificata al set di righe.|  
|[db_command](../windows/db-command.md)|Crea un comando OLE DB.|  
|[db_param](../windows/db-param.md)|Associa la variabile membro a un parametro di input o output e delimita la variabile.|  
|[db_source](../windows/db-source.md)|Crea una connessione a un'origine dati.|  
|[db_table](../windows/db-table.md)|Verrà visualizzata una tabella OLE DB.|  
|[defaultbind](../windows/defaultbind.md)|Indica la singola proprietà associabile che meglio rappresenta l'oggetto.|  
|[defaultcollelem](../windows/defaultcollelem.md)|Utilizzato per ottimizzare il codice Visual Basic.|  
|[displaybind](../windows/displaybind.md)|Indica una proprietà che deve essere visualizzata all'utente come associabile.|  
|[helpcontext](../windows/helpcontext.md)|Specifica un ID di contesto che consente di visualizzare informazioni su questo elemento nel file della Guida.|  
|[helpfile](../windows/helpfile.md)|Imposta il nome del file della Guida per una libreria dei tipi.|  
|[helpstring](../windows/helpstring.md)|Specifica una stringa di caratteri utilizzato per descrivere l'elemento a cui viene applicata.|  
|[helpstringcontext](../windows/helpstringcontext.md)|Specifica l'ID di un argomento della Guida in un file hlp o chm.|  
|[helpstringdll](../windows/helpstringdll.md)|Specifica il nome della DLL da utilizzare per eseguire la ricerca della stringa di documento (localizzazione).|  
|[hidden](../windows/hidden.md)|Indica che l'elemento esiste ma non deve essere visualizzato in un visualizzatore per utente.|  
|[id](../windows/id.md)|Specifica un DISPID per una funzione membro (una proprietà o un metodo, in un'interfaccia o interfaccia dispatch).|  
|[immediatebind](../windows/immediatebind.md)|Indica che il database verrà informato immediatamente di tutte le modifiche a una proprietà di un oggetto con associazione a dati.|  
|[in](../windows/in-cpp.md)|Indica che un parametro deve essere passato dalla routine chiamante alla routine chiamata.|  
|[locale](../windows/local-cpp.md)|Consente di usare il compilatore MIDL come generatore di intestazione utilizzato nell'intestazione di interfaccia. Quando utilizzato in una singola funzione, indica una procedura locale per il quale non vengono generati stub.|  
|[nonbrowsable](../windows/nonbrowsable.md)|Indica che un membro di interfaccia non deve essere visualizzato in un visualizzatore proprietà.|  
|[propget](../windows/propget.md)|Specifica una funzione di accesso della proprietà.|  
|[propput](../windows/propput.md)|Specifica una funzione di impostazione della proprietà.|  
|[propputref](../windows/propputref.md)|Specifica una funzione di impostazione della proprietà che utilizza un riferimento anziché un valore.|  
|[ptr](../windows/ptr.md)|Indica un puntatore come un puntatore completo.|  
|[intervallo](../windows/range-cpp.md)|Specifica un intervallo di valori consentiti per gli argomenti o i campi i cui valori sono impostati in fase di esecuzione.|  
|[requestedit](../windows/requestedit.md)|Indica che la proprietà supporta il **OnRequestEdit** notifica.|  
|[restricted](../windows/restricted.md)|Specifica che un membro di un modulo, interfaccia o interfaccia dispatch non può essere chiamato in modo arbitrario.|  
|[satype](../windows/satype.md)|Specifica il tipo di dati di **SAFEARRAY** struttura.|  
|[origine](../windows/source-cpp.md)|Specifica le interfacce di origine del controllo per i punti di connessione in una classe. In una proprietà o metodo, il **origine** attributo indica che il membro restituisce un oggetto o una variante di un'origine di eventi.|  
|[synchronize](../windows/synchronize.md)|Sincronizza l'accesso al metodo di destinazione.|  
|[vararg](../windows/vararg.md)|Specifica che la funzione accetta un numero variabile di argomenti.|  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi per utilizzo](../windows/attributes-by-usage.md)