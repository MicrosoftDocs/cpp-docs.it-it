---
title: Classe di attributi | Documenti Microsoft
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
ms.openlocfilehash: 8a932fdb1ef1d9e2af2acace901feaa95b6216d1
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33861441"
---
# <a name="class-attributes"></a>Attributi di classe
Gli attributi seguenti riguardano la [classe](../cpp/class-cpp.md) parola chiave di C++.  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|[aggregatable](../windows/aggregatable.md)|Indica che la classe supporta l'aggregazione.|  
|[aggregates](../windows/aggregates.md)|Indica che un controllo Aggrega la classe di destinazione.|  
|[appobject](../windows/appobject.md)|Identifica la coclasse come un oggetto applicazione, che viene associata a un'applicazione completa .exe e indica che le funzioni e le proprietà della coclasse sono disponibili a livello globale in questa libreria dei tipi.|  
|[case](../windows/case-cpp.md)|Utilizzato con il [switch_type](../windows/switch-type.md) attributo in un'unione.|  
|[coclass](../windows/coclass.md)|Crea un controllo ActiveX.|  
|[COM_INTERFACE_ENTRY](../windows/com-interface-entry-cpp.md)|Aggiunge una voce di interfaccia a una mappa COM.|  
|[control](../windows/control.md)|Specifica che il tipo definito dall'utente è un controllo.|  
|[custom](../windows/custom-cpp.md)|Consente di definire un attributo personalizzato.|  
|[db_command](../windows/db-command.md)|Crea un comando OLE DB.|  
|[db_param](../windows/db-param.md)|Associa la variabile membro a un parametro di input o output e delimita la variabile.|  
|[db_source](../windows/db-source.md)|Crea una connessione a un'origine dati.|  
|[db_table](../windows/db-table.md)|Verrà visualizzata una tabella OLE DB.|  
|[default](../windows/default-cpp.md)|Indica che l'interfaccia personalizzata o dispatch definita in una coclasse rappresenta l'interfaccia di programmabilità predefinita.|  
|[defaultvtable](../windows/defaultvtable.md)|Definisce un'interfaccia come interfaccia vtable predefinita per un controllo.|  
|[event_receiver](../windows/event-receiver.md)|Crea un ricevitore di eventi.|  
|[event_source](../windows/event-source.md)|Crea un'origine evento.|  
|[helpcontext](../windows/helpcontext.md)|Specifica un ID di contesto che consente di visualizzare informazioni su questo elemento nel file della Guida.|  
|[helpfile](../windows/helpfile.md)|Imposta il nome del file della Guida per una libreria dei tipi.|  
|[helpstringcontext](../windows/helpstringcontext.md)|Specifica l'ID di un argomento della Guida in un file hlp o chm.|  
|[helpstring](../windows/helpstring.md)|Specifica una stringa di caratteri utilizzato per descrivere l'elemento a cui viene applicata.|  
|[hidden](../windows/hidden.md)|Indica che l'elemento esiste ma non deve essere visualizzato in un visualizzatore per utente.|  
|[Implementa](../windows/implements-cpp.md)|Specifica le interfacce di invio che sono obbligate a essere membri della coclasse IDL.|  
|[implements_category](../windows/implements-category.md)|Specifica le categorie di componenti implementato per la classe.|  
|[Modulo](../windows/module-cpp.md)|Definisce il blocco di libreria nel file IDL.|  
|[noncreatable](../windows/noncreatable.md)|Definisce un oggetto che non è possibile creare istanze di se stesso.|  
|[progid](../windows/progid.md)|Definisce il ProgID di un controllo.|  
|[registration_script](../windows/registration-script.md)|Esegue lo script di registrazione specificata.|  
|[requestedit](../windows/requestedit.md)|Indica che la proprietà supporta il **OnRequestEdit** notifica.|  
|[Origine](../windows/source-cpp.md)|Specifica le interfacce di origine del controllo per i punti di connessione in una classe. In una proprietà o metodo, il **origine** attributo indica che il membro restituisce un oggetto o una variante di un'origine di eventi.|  
|[support_error_info](../windows/support-error-info.md)|Supporta la segnalazione errori per l'oggetto di destinazione.|  
|[Threading](../windows/threading-cpp.md)|Specifica il modello di threading per un controllo.|  
|[uuid](../windows/uuid-cpp-attributes.md)|Specifica l'ID univoco per una classe o interfaccia.|  
|[version](../windows/version-cpp.md)|Identifica una particolare versione tra più versioni di una classe.|  
|[vi_progid](../windows/vi-progid.md)|Specifica un formato indipendente dalla versione di ProgID.|  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi per utilizzo](../windows/attributes-by-usage.md)