---
title: Attributi di classi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- attributes [C++], class attributes
- class attributes
ms.assetid: fad04ea1-d8ff-46d4-bb42-2b4500a6ab60
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5b0057fa97805c093df7cac126e87f9af0a98a73
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42611893"
---
# <a name="class-attributes"></a>Attributi di classe

Gli attributi seguenti si applicano per la [classe](../cpp/class-cpp.md) parola chiave di C++.

|Attributo|Descrizione|
|---------------|-----------------|
|[aggregatable](../windows/aggregatable.md)|Indica che la classe supporta l'aggregazione.|
|[aggregates](../windows/aggregates.md)|Indica che un controllo viene aggregata la classe di destinazione.|
|[appobject](../windows/appobject.md)|Identifica la coclasse come un oggetto applicazione che è associato a un'applicazione completa .exe e indica che le funzioni e le proprietà della coclasse sono disponibili a livello globale in questa libreria dei tipi.|
|[case](../windows/case-cpp.md)|Utilizzato con il [switch_type](../windows/switch-type.md) attributo in un'unione.|
|[coclass](../windows/coclass.md)|Crea un controllo ActiveX.|
|[COM_INTERFACE_ENTRY](../windows/com-interface-entry-cpp.md)|Aggiunge una voce di interfaccia a una mappa COM.|
|[control](../windows/control.md)|Specifica che il tipo definito dall'utente è un controllo.|
|[custom](../windows/custom-cpp.md)|È possibile definire un attributo personalizzato.|
|[db_command](../windows/db-command.md)|Crea un comando OLE DB.|
|[db_param](../windows/db-param.md)|Consente di associare la variabile di membro specificato con un parametro di input o output e delimita la variabile.|
|[db_source](../windows/db-source.md)|Crea una connessione a un'origine dati.|
|[db_table](../windows/db-table.md)|Apre una tabella di OLE DB.|
|[default](../windows/default-cpp.md)|Indica che l'interfaccia personalizzata o dispatch definita in una coclasse rappresenta l'interfaccia di programmabilità predefinita.|
|[defaultvtable](../windows/defaultvtable.md)|Definisce un'interfaccia come interfaccia predefinita vtable per un controllo.|
|[event_receiver](../windows/event-receiver.md)|Crea un ricevitore di eventi.|
|[event_source](../windows/event-source.md)|Crea un'origine evento.|
|[helpcontext](../windows/helpcontext.md)|Specifica un ID di contesto che consente all'utente di visualizzare informazioni sull'elemento corrente nel **aiutare** file.|
|[helpfile](../windows/helpfile.md)|Imposta il nome del file della Guida per una libreria dei tipi.|
|[helpstringcontext](../windows/helpstringcontext.md)|Specifica l'ID di un argomento della Guida in un file con estensione chm o. hlp.|
|[helpstring](../windows/helpstring.md)|Specifica una stringa di caratteri usata per descrivere l'elemento a cui viene applicata.|
|[hidden](../windows/hidden.md)|Indica che l'elemento esiste ma non deve essere visualizzato in un browser orientate all'utente.|
|[Implementa](../windows/implements-cpp.md)|Specifica le interfacce dispatch che vengono forzate per essere membri della coclasse IDL.|
|[implements_category](../windows/implements-category.md)|Specifica le categorie di componenti implementate per la classe.|
|[modulo](../windows/module-cpp.md)|Definisce il blocco di libreria nel file IDL.|
|[noncreatable](../windows/noncreatable.md)|Definisce un oggetto che non è possibile creare istanze di se stesso.|
|[progid](../windows/progid.md)|Definisce il ProgID di un controllo.|
|[registration_script](../windows/registration-script.md)|Esegue lo script di registrazione specificata.|
|[requestedit](../windows/requestedit.md)|Indica che la proprietà supporta il `OnRequestEdit` notifica.|
|[source](../windows/source-cpp.md)|Specifica le interfacce di origine del controllo per i punti di connessione in una classe. In una proprietà o metodo, il `source` attributo indica che il membro restituisce un oggetto o `VARIANT` vale a dire un'origine di eventi.|
|[support_error_info](../windows/support-error-info.md)|Supporta la segnalazione degli errori per l'oggetto di destinazione.|
|[Threading](../windows/threading-cpp.md)|Specifica il modello di threading per un controllo.|
|[uuid](../windows/uuid-cpp-attributes.md)|Specifica l'ID univoco per una classe o interfaccia.|
|[version](../windows/version-cpp.md)|Identifica una particolare versione tra più versioni di una classe.|
|[vi_progid](../windows/vi-progid.md)|Specifica una forma indipendente dalla versione di ProgID.|

## <a name="see-also"></a>Vedere anche

[Attributi per utilizzo](../windows/attributes-by-usage.md)