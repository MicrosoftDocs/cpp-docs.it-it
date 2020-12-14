---
description: 'Altre informazioni su: attributi di classe'
title: Attributi di classe (C++ COM)
ms.date: 10/02/2018
helpviewer_keywords:
- attributes [C++/CLI], class attributes
ms.assetid: fad04ea1-d8ff-46d4-bb42-2b4500a6ab60
ms.openlocfilehash: ea929ed7f5fac949393e6d3cf2b24195babfeea7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97247384"
---
# <a name="class-attributes"></a>Attributi di classe

Gli attributi seguenti si applicano alla parola chiave C++ della [classe](../../cpp/class-cpp.md) .

|Attributo|Descrizione|
|---------------|-----------------|
|[aggregatable](aggregatable.md)|Indica che la classe supporta l'aggregazione.|
|[aggregati](aggregates.md)|Indica che un controllo aggrega la classe di destinazione.|
|[appobject](appobject.md)|Identifica la coclasse come oggetto applicazione, che è associato a un'applicazione exe completa, e indica che le funzioni e le proprietà della coclasse sono disponibili a livello globale in questa libreria dei tipi.|
|[case](case-cpp.md)|Utilizzato con l'attributo [switch_type](switch-type.md) in un'Unione.|
|[coclass](coclass.md)|Crea un controllo ActiveX.|
|[com_interface_entry](com-interface-entry-cpp.md)|Aggiunge una voce di interfaccia a una mappa COM.|
|[control](control.md)|Specifica che il tipo definito dall'utente è un controllo.|
|[personalizzato](custom-cpp.md)|Consente di definire un attributo personalizzato.|
|[db_command](db-command.md)|Crea un comando OLE DB.|
|[db_param](db-param.md)|Associa la variabile membro specificata a un parametro di input o output e delimita la variabile.|
|[db_source](db-source.md)|Crea una connessione a un'origine dati.|
|[db_table](db-table.md)|Apre una tabella OLE DB.|
|[default](default-cpp.md)|Indica che l'interfaccia personalizzata o dispatch definita in una coclasse rappresenta l'interfaccia di programmabilità predefinita.|
|[defaultvtable](defaultvtable.md)|Definisce un'interfaccia come interfaccia vtable predefinita per un controllo.|
|[event_receiver](event-receiver.md)|Crea un ricevitore di eventi.|
|[event_source](event-source.md)|Crea un'origine evento.|
|[helpcontext](helpcontext.md)|Specifica un ID di contesto che consente all'utente di visualizzare informazioni sull'elemento nel file della **Guida** .|
|[helpfile](helpfile.md)|Imposta il nome del file della Guida per una libreria dei tipi.|
|[helpstringcontext](helpstringcontext.md)|Specifica l'ID di un argomento della Guida in un file con estensione hlp o CHM.|
|[helpstring](helpstring.md)|Specifica una stringa di caratteri usata per descrivere l'elemento a cui viene applicata.|
|[nascosto](hidden.md)|Indica che l'elemento esiste ma non deve essere visualizzato in un browser orientato all'utente.|
|[implementa](implements-cpp.md)|Specifica le interfacce di invio forzate a essere membri della coclasse IDL.|
|[implements_category](implements-category.md)|Specifica le categorie di componenti implementate per la classe.|
|[modulo](module-cpp.md)|Definisce il blocco di libreria nel file IDL.|
|[noncreatable](noncreatable.md)|Definisce un oggetto di cui non è possibile creare un'istanza.|
|[ProgID](progid.md)|Definisce il ProgID per un controllo.|
|[registration_script](registration-script.md)|Esegue lo script di registrazione specificato.|
|[requestedit](requestedit.md)|Indica che la proprietà supporta la notifica `OnRequestEdit`.|
|[source](source-cpp.md)|Specifica le interfacce di origine del controllo per i punti di connessione su una classe. In una proprietà o un metodo l' `source` attributo indica che il membro restituisce un oggetto o `VARIANT` che è un'origine di eventi.|
|[support_error_info](support-error-info.md)|Supporta la segnalazione degli errori per l'oggetto di destinazione.|
|[Threading](threading-cpp.md)|Specifica il modello di threading per un controllo.|
|[UUID](uuid-cpp-attributes.md)|Specifica l'ID univoco per una classe o un'interfaccia.|
|[version](version-cpp.md)|Identifica una particolare versione tra più versioni di una classe.|
|[vi_progid](vi-progid.md)|Specifica una forma indipendente dalla versione del ProgID.|

## <a name="see-also"></a>Vedi anche

[Attributi per utilizzo](attributes-by-usage.md)
