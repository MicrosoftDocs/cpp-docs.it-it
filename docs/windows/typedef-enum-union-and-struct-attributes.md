---
title: TypeDef, Enum, Union e Struct (attributi) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- union attributes
- attributes [C++], reference topics
- struct attributes
- typedef attributes
- enum attributes
ms.assetid: f8a4fe94-dc02-4aed-bc31-3e500d42f4c7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c14881afd000dc5fb4223a2ecfa9dcdc67e7b541
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33891831"
---
# <a name="typedef-enum-union-and-struct-attributes"></a>Attributi Typedef, Enum, Union e Struct
Gli attributi seguenti si applicano al [typedef](http://msdn.microsoft.com/en-us/cc96cf26-ba93-4179-951e-695d1f5fdcf1), [struct](../cpp/struct-cpp.md), e [enum](../cpp/enumerations-cpp.md) parole chiave C++.  
  
### <a name="typedef"></a>typedef  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|[case](../windows/case-cpp.md)|Utilizzato con il [switch_type](../windows/switch-type.md) attributo un **unione**.|  
|[custom](../windows/custom-cpp.md)|Consente di definire un attributo personalizzato.|  
|[export](../windows/export.md)|Fa sì che una struttura di dati da inserire nel file IDL.|  
|[first_is](../windows/first-is.md)|Specifica l'indice del primo elemento della matrice deve essere trasmesso.|  
|[helpcontext](../windows/helpcontext.md)|Specifica un ID di contesto che consente di visualizzare informazioni su questo elemento nel file della Guida.|  
|[helpfile](../windows/helpfile.md)|Imposta il nome del file della Guida per una libreria dei tipi.|  
|[helpstring](../windows/helpstring.md)|Specifica una stringa di caratteri utilizzato per descrivere l'elemento a cui viene applicata.|  
|[library_block](../windows/library-block.md)|Inserisce un costrutto di blocco di libreria del file IDL.|  
|[ptr](../windows/ptr.md)|Indica un puntatore come un puntatore completo.|  
|[public](../windows/public-cpp-attributes.md)|Garantisce che un typedef entra in una libreria dei tipi anche se non vi fa riferimento all'interno del file IDL.|  
|[ref](../windows/ref-cpp.md)|Identifica un puntatore di riferimento.|  
|[switch_is](../windows/switch-is.md)|Specifica l'espressione o un identificatore che agisce come l'unione discriminante che consente di selezionare il membro dell'unione.|  
|[switch_type](../windows/switch-type.md)|Identifica il tipo della variabile utilizzata come l'unione discriminante.|  
|[unique](../windows/unique-cpp.md)|Specifica un puntatore univoco.|  
|[wire_marshal](../windows/wire-marshal.md)|Specifica un tipo di dati che verrà utilizzato per la trasmissione anziché un tipo di dati specifici dell'applicazione.|  
  
### <a name="enum"></a>enum  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|[custom](../windows/custom-cpp.md)|Consente di definire un attributo personalizzato.|  
|[export](../windows/export.md)|Fa sì che una struttura di dati da inserire nel file IDL.|  
|[uuid](../windows/uuid-cpp-attributes.md)|Specifica l'ID univoco per una classe o interfaccia.|  
|[v1_enum](../windows/v1-enum.md)|Indica che il tipo enumerato specificato deve essere trasmesso come un'entità a 32 bit, anziché il valore predefinito di 16 bit.|  
  
### <a name="union"></a>union  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|[custom](../windows/custom-cpp.md)|Consente di definire un attributo personalizzato.|  
|[export](../windows/export.md)|Fa sì che una struttura di dati da inserire nel file IDL.|  
|[first_is](../windows/first-is.md)|Specifica l'indice del primo elemento della matrice deve essere trasmesso.|  
|[last_is](../windows/last-is.md)|Specifica l'indice dell'ultimo elemento di matrice da trasmettere.|  
|[length_is](../windows/length-is.md)|Specifica il numero di elementi della matrice deve essere trasmesso.|  
|[max_is](../windows/max-is.md)|Indica il valore massimo per un indice di matrice valida.|  
|[size_is](../windows/size-is.md)|Specifica le dimensioni della memoria allocata per i puntatori di dimensioni, con dimensioni puntatori e unidimensionali o le matrici multidimensionali.|  
|[unique](../windows/unique-cpp.md)|Specifica un puntatore univoco.|  
|[uuid](../windows/uuid-cpp-attributes.md)|Specifica l'ID univoco per una classe o interfaccia.|  
  
### <a name="nonencapsulated-union"></a>Unione nonencapsulated  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|[ms_union](../windows/ms-union.md)|Controlla l'allineamento di rappresentazione di dati di rete di unioni nonencapsulated.|  
|[no_injected_text](../windows/no-injected-text.md)|Impedisce al compilatore di codice in seguito a uso dell'attributo.|  
  
### <a name="struct"></a>struct  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|[aggregatable](../windows/aggregatable.md)|Indica che la classe supporta l'aggregazione.|  
|[aggregates](../windows/aggregates.md)|Indica che un controllo Aggrega la classe di destinazione.|  
|[appobject](../windows/appobject.md)|Identifica la coclasse come un oggetto applicazione, che viene associata a un'applicazione completa .exe e indica che le funzioni e le proprietà della coclasse sono disponibili a livello globale in questa libreria dei tipi.|  
|[coclass](../windows/coclass.md)|Crea un controllo ActiveX.|  
|[COM_INTERFACE_ENTRY](../windows/com-interface-entry-cpp.md)|Aggiunge una voce di interfaccia a una mappa COM.|  
|[control](../windows/control.md)|Specifica che il tipo definito dall'utente è un controllo.|  
|[custom](../windows/custom-cpp.md)|Consente di definire un attributo personalizzato.|  
|[db_column](../windows/db-column.md)|Associa una colonna specificata al set di righe.|  
|[db_command](../windows/db-command.md)|Crea un comando OLE DB.|  
|[db_param](../windows/db-param.md)|Associa la variabile membro a un parametro di input o output e delimita la variabile.|  
|[db_source](../windows/db-source.md)|Crea una connessione a un'origine dati.|  
|[db_table](../windows/db-table.md)|Verrà visualizzata una tabella OLE DB.|  
|[default](../windows/default-cpp.md)|Indica che l'interfaccia personalizzata o dispatch definita in una coclasse rappresenta l'interfaccia di programmabilità predefinita.|  
|[defaultvtable](../windows/defaultvtable.md)|Definisce un'interfaccia come interfaccia vtable predefinita per un controllo.|  
|[event_receiver](../windows/event-receiver.md)|Crea un ricevitore di eventi.|  
|[event_source](../windows/event-source.md)|Crea un'origine evento.|  
|[export](../windows/export.md)|Fa sì che una struttura di dati da inserire nel file IDL.|  
|[first_is](../windows/first-is.md)|Specifica l'indice del primo elemento della matrice deve essere trasmesso.|  
|[hidden](../windows/hidden.md)|Indica che l'elemento esiste ma non deve essere visualizzato in un visualizzatore per utente.|  
|[implements_category](../windows/implements-category.md)|Specifica le categorie di componenti implementato per la classe.|  
|[last_is](../windows/last-is.md)|Specifica l'indice dell'ultimo elemento di matrice da trasmettere.|  
|[length_is](../windows/length-is.md)|Specifica il numero di elementi della matrice deve essere trasmesso.|  
|[max_is](../windows/max-is.md)|Indica il valore massimo per un indice di matrice valida.|  
|[requires_category](../windows/requires-category.md)|Specifica le categorie del componente richiesto della classe di destinazione.|  
|[size_is](../windows/size-is.md)|Specifica le dimensioni della memoria allocata per i puntatori di dimensioni, con dimensioni puntatori e unidimensionali o le matrici multidimensionali.|  
|[Origine](../windows/source-cpp.md)|In una classe, specifica le interfacce di origine dell'oggetto COM per i punti di connessione. In un metodo o proprietà, indica che il membro restituisce un oggetto o una variante di un'origine di eventi.|  
|[Threading](../windows/threading-cpp.md)|Specifica il modello di threading per un oggetto COM.|  
|[unique](../windows/unique-cpp.md)|Specifica un puntatore univoco.|  
|[uuid](../windows/uuid-cpp-attributes.md)|Specifica l'ID univoco per una classe o interfaccia.|  
|[version](../windows/version-cpp.md)|Identifica una particolare versione tra più versioni di una classe.|  
|[vi_progid](../windows/vi-progid.md)|Specifica un formato indipendente dalla versione di ProgID.|  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi per utilizzo](../windows/attributes-by-usage.md)