---
description: 'Altre informazioni su: attributi di metodo'
title: Attributi di metodo (C++ COM)
ms.date: 10/02/2018
helpviewer_keywords:
- method attributes
- attributes [C++/CLI], reference topics
ms.assetid: b2313352-480d-488b-8c35-6242ffd3a549
ms.openlocfilehash: 29acb1f92b01e85960bc727c9b3e91f9a52732d5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327505"
---
# <a name="method-attributes"></a>Attributi del metodo

Gli attributi seguenti si applicano ai metodi in una classe, una coclasse o un'interfaccia.

|Attributo|Descrizione|
|---------------|-----------------|
|[bindable](bindable.md)|Indica che la proprietà supporta il data binding.|
|[call_as](call-as.md)|Consente di eseguire il mapping di una funzione non a una funzione remota.|
|[personalizzato](custom-cpp.md)|Consente di definire un attributo personalizzato.|
|[db_column](db-column.md)|Associa una colonna specificata al set di righe.|
|[db_command](db-command.md)|Crea un comando OLE DB.|
|[db_param](db-param.md)|Associa la variabile membro specificata a un parametro di input o output e delimita la variabile.|
|[db_source](db-source.md)|Crea una connessione a un'origine dati.|
|[db_table](db-table.md)|Apre una tabella OLE DB.|
|[defaultbind](defaultbind.md)|Indica la singola proprietà associabile che meglio rappresenta l'oggetto.|
|[defaultcollelem](defaultcollelem.md)|Usato per l'ottimizzazione del codice Visual Basic.|
|[displaybind](displaybind.md)|Indica una proprietà che deve essere visualizzata all'utente come associabile.|
|[helpcontext](helpcontext.md)|Specifica un ID di contesto che consente all'utente di visualizzare informazioni sull'elemento nel file della **Guida** .|
|[helpfile](helpfile.md)|Imposta il nome del file della **Guida** per una libreria dei tipi.|
|[helpstring](helpstring.md)|Specifica una stringa di caratteri usata per descrivere l'elemento a cui viene applicata.|
|[helpstringcontext](helpstringcontext.md)|Specifica l'ID di un argomento della Guida in un file con estensione hlp o CHM.|
|[helpstringdll](helpstringdll.md)|Specifica il nome della DLL da usare per eseguire la ricerca di stringhe di documento (localizzazione).|
|[nascosto](hidden.md)|Indica che l'elemento esiste ma non deve essere visualizzato in un browser orientato all'utente.|
|[id](id.md)|Specifica un DISPID per una funzione membro, ovvero una proprietà o un metodo, in un'interfaccia o in un'interfaccia dispatch.|
|[immediatebind](immediatebind.md)|Indica che il database riceverà immediatamente una notifica di tutte le modifiche apportate a una proprietà di un oggetto associato a dati.|
|[in](in-cpp.md)|Indica che un parametro deve essere passato dalla routine chiamante alla routine chiamata.|
|[locale](local-cpp.md)|Consente di usare il compilatore MIDL come generatore di intestazioni quando viene usato nell'intestazione dell'interfaccia. Se utilizzata in una singola funzione, definisce una procedura locale per la quale non vengono generati stub.|
|[nonbrowsable](nonbrowsable.md)|Indica che un membro di interfaccia non deve essere visualizzato in un visualizzatore proprietà.|
|[propget](propget.md)|Specifica una funzione di accesso alla proprietà.|
|[propput](propput.md)|Specifica una funzione di impostazione di proprietà.|
|[propputref](propputref.md)|Specifica una funzione di impostazione di proprietà che usa un riferimento invece di un valore.|
|[ptr](ptr.md)|Designa un puntatore come puntatore completo.|
|[range](range-cpp.md)|Specifica un intervallo di valori consentiti per argomenti o campi i cui valori sono impostati in fase di esecuzione.|
|[requestedit](requestedit.md)|Indica che la proprietà supporta la notifica `OnRequestEdit`.|
|[limitato](restricted.md)|Specifica che un membro di un modulo, di un'interfaccia o di un'interfaccia dispatch non può essere chiamato in modo arbitrario.|
|[satype](satype.md)|Specifica il tipo di dati della `SAFEARRAY` struttura.|
|[source](source-cpp.md)|Specifica le interfacce di origine del controllo per i punti di connessione su una classe. In una proprietà o un metodo l' `source` attributo indica che il membro restituisce un oggetto o una variante che è un'origine di eventi.|
|[sincronizzare](synchronize.md)|Sincronizza l'accesso al metodo di destinazione.|
|[vararg](vararg.md)|Specifica che la funzione accetta un numero variabile di argomenti.|

## <a name="see-also"></a>Vedi anche

[Attributi per utilizzo](attributes-by-usage.md)
