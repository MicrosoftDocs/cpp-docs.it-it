---
title: Gli attributi del metodo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- method attributes
- attributes [C++], reference topics
ms.assetid: b2313352-480d-488b-8c35-6242ffd3a549
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1850507b9d00ab717a2602d4e230968f5222f077
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39604281"
---
# <a name="method-attributes"></a>Attributi del metodo
Gli attributi seguenti si applicano ai metodi in una classe, coclasse o interfaccia.  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|[bindable](../windows/bindable.md)|Indica che la proprietà supporta il data binding.|  
|[call_as](../windows/call-as.md)|Consente a una funzione non utilizzabili in remoto per eseguire il mapping a una funzione remota.|  
|[custom](../windows/custom-cpp.md)|È possibile definire un attributo personalizzato.|  
|[db_column](../windows/db-column.md)|Associa una colonna specificata al set di righe.|  
|[db_command](../windows/db-command.md)|Crea un comando OLE DB.|  
|[db_param](../windows/db-param.md)|Consente di associare la variabile di membro specificato con un parametro di input o output e delimita la variabile.|  
|[db_source](../windows/db-source.md)|Crea una connessione a un'origine dati.|  
|[db_table](../windows/db-table.md)|Apre una tabella di OLE DB.|  
|[defaultbind](../windows/defaultbind.md)|Indica la singola proprietà associabile che meglio rappresenta l'oggetto.|  
|[defaultcollelem](../windows/defaultcollelem.md)|Utilizzato per l'ottimizzazione del codice Visual Basic.|  
|[displaybind](../windows/displaybind.md)|Indica una proprietà che deve essere visualizzata all'utente come associabile.|  
|[helpcontext](../windows/helpcontext.md)|Specifica un ID di contesto che consente all'utente di visualizzare informazioni sull'elemento corrente nel file della Guida.|  
|[helpfile](../windows/helpfile.md)|Imposta il nome del file della Guida per una libreria dei tipi.|  
|[helpstring](../windows/helpstring.md)|Specifica una stringa di caratteri usata per descrivere l'elemento a cui viene applicata.|  
|[helpstringcontext](../windows/helpstringcontext.md)|Specifica l'ID di un argomento della Guida in un file con estensione chm o. hlp.|  
|[helpstringdll](../windows/helpstringdll.md)|Specifica il nome della DLL da usare per eseguire la ricerca della stringa di documento (localizzazione).|  
|[hidden](../windows/hidden.md)|Indica che l'elemento esiste ma non deve essere visualizzato in un browser orientate all'utente.|  
|[ID](../windows/id.md)|Specifica un DISPID per una funzione membro (una proprietà o un metodo, in un'interfaccia o interfaccia dispatch).|  
|[immediatebind](../windows/immediatebind.md)|Indica che il database verrà immediatamente notificato tutte le modifiche apportate a una proprietà di un oggetto con associazione a dati.|  
|[in](../windows/in-cpp.md)|Indica che un parametro deve essere passato dalla routine chiamante alla routine chiamata.|  
|[local](../windows/local-cpp.md)|Consente di usare il compilatore MIDL come generatore di intestazione quando usato nell'intestazione dell'interfaccia. Se usato in una singola funzione, designa una procedura locale per cui non gli stub vengono generati.|  
|[nonbrowsable](../windows/nonbrowsable.md)|Indica che un membro di interfaccia non deve essere visualizzato in un visualizzatore proprietà.|  
|[propget](../windows/propget.md)|Specifica una funzione di accesso di proprietà.|  
|[propput](../windows/propput.md)|Specifica una funzione impostazione della proprietà.|  
|[propputref](../windows/propputref.md)|Specifica una funzione impostazione della proprietà che utilizza un riferimento anziché un valore.|  
|[ptr](../windows/ptr.md)|Definisce un puntatore come puntatore completo.|  
|[Intervallo](../windows/range-cpp.md)|Specifica un intervallo di valori consentiti per gli argomenti o i campi i cui valori vengono impostati in fase di esecuzione.|  
|[requestedit](../windows/requestedit.md)|Indica che la proprietà supporta il `OnRequestEdit` notifica.|  
|[restricted](../windows/restricted.md)|Specifica che un membro di un modulo, interfaccia o interfaccia dispatch non può essere chiamato in modo arbitrario.|  
|[satype](../windows/satype.md)|Specifica il tipo di dati di `SAFEARRAY` struttura.|  
|[source](../windows/source-cpp.md)|Specifica le interfacce di origine del controllo per i punti di connessione in una classe. In una proprietà o metodo, il `source` attributo indica che il membro restituisce un oggetto o una variante che rappresenta l'origine degli eventi.|  
|[synchronize](../windows/synchronize.md)|Sincronizza l'accesso al metodo di destinazione.|  
|[vararg](../windows/vararg.md)|Specifica che la funzione accetta un numero variabile di argomenti.|  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi per utilizzo](../windows/attributes-by-usage.md)