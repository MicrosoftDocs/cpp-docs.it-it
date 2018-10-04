---
title: Classe di attributi (COM C++) | Microsoft Docs
ms.custom: ''
ms.date: 10/02/2018
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- attributes [C++/CLI], class attributes
ms.assetid: fad04ea1-d8ff-46d4-bb42-2b4500a6ab60
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a727bcf53a11e98ffd7e037037452c6bbdc4fe8a
ms.sourcegitcommit: 955ef0f9d966e7c9c65e040f1e28fa83abe102a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/04/2018
ms.locfileid: "48791332"
---
# <a name="class-attributes"></a>Attributi di classe

Gli attributi seguenti si applicano per la [classe](../../cpp/class-cpp.md) parola chiave di C++.

|Attributo|Descrizione|
|---------------|-----------------|
|[aggregatable](aggregatable.md)|Indica che la classe supporta l'aggregazione.|
|[aggregates](aggregates.md)|Indica che un controllo viene aggregata la classe di destinazione.|
|[appobject](appobject.md)|Identifica la coclasse come un oggetto applicazione che è associato a un'applicazione completa .exe e indica che le funzioni e le proprietà della coclasse sono disponibili a livello globale in questa libreria dei tipi.|
|[case](case-cpp.md)|Utilizzato con il [switch_type](switch-type.md) attributo in un'unione.|
|[coclass](coclass.md)|Crea un controllo ActiveX.|
|[COM_INTERFACE_ENTRY](com-interface-entry-cpp.md)|Aggiunge una voce di interfaccia a una mappa COM.|
|[control](control.md)|Specifica che il tipo definito dall'utente è un controllo.|
|[custom](custom-cpp.md)|È possibile definire un attributo personalizzato.|
|[db_command](db-command.md)|Crea un comando OLE DB.|
|[db_param](db-param.md)|Consente di associare la variabile di membro specificato con un parametro di input o output e delimita la variabile.|
|[db_source](db-source.md)|Crea una connessione a un'origine dati.|
|[db_table](db-table.md)|Apre una tabella di OLE DB.|
|[default](default-cpp.md)|Indica che l'interfaccia personalizzata o dispatch definita in una coclasse rappresenta l'interfaccia di programmabilità predefinita.|
|[defaultvtable](defaultvtable.md)|Definisce un'interfaccia come interfaccia predefinita vtable per un controllo.|
|[event_receiver](event-receiver.md)|Crea un ricevitore di eventi.|
|[event_source](event-source.md)|Crea un'origine evento.|
|[helpcontext](helpcontext.md)|Specifica un ID di contesto che consente all'utente di visualizzare informazioni sull'elemento corrente nel **aiutare** file.|
|[helpfile](helpfile.md)|Imposta il nome del file della Guida per una libreria dei tipi.|
|[helpstringcontext](helpstringcontext.md)|Specifica l'ID di un argomento della Guida in un file con estensione chm o. hlp.|
|[helpstring](helpstring.md)|Specifica una stringa di caratteri usata per descrivere l'elemento a cui viene applicata.|
|[hidden](hidden.md)|Indica che l'elemento esiste ma non deve essere visualizzato in un browser orientate all'utente.|
|[Implementa](implements-cpp.md)|Specifica le interfacce dispatch che vengono forzate per essere membri della coclasse IDL.|
|[implements_category](implements-category.md)|Specifica le categorie di componenti implementate per la classe.|
|[modulo](module-cpp.md)|Definisce il blocco di libreria nel file IDL.|
|[noncreatable](noncreatable.md)|Definisce un oggetto che non è possibile creare istanze di se stesso.|
|[progid](progid.md)|Definisce il ProgID di un controllo.|
|[registration_script](registration-script.md)|Esegue lo script di registrazione specificata.|
|[requestedit](requestedit.md)|Indica che la proprietà supporta il `OnRequestEdit` notifica.|
|[source](source-cpp.md)|Specifica le interfacce di origine del controllo per i punti di connessione in una classe. In una proprietà o metodo, il `source` attributo indica che il membro restituisce un oggetto o `VARIANT` vale a dire un'origine di eventi.|
|[support_error_info](support-error-info.md)|Supporta la segnalazione degli errori per l'oggetto di destinazione.|
|[Threading](threading-cpp.md)|Specifica il modello di threading per un controllo.|
|[uuid](uuid-cpp-attributes.md)|Specifica l'ID univoco per una classe o interfaccia.|
|[version](version-cpp.md)|Identifica una particolare versione tra più versioni di una classe.|
|[vi_progid](vi-progid.md)|Specifica una forma indipendente dalla versione di ProgID.|

## <a name="see-also"></a>Vedere anche

[Attributi per utilizzo](attributes-by-usage.md)