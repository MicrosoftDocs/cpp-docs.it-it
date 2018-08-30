---
title: TypeDef, Enum, Union e struct (attributi) | Microsoft Docs
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
ms.openlocfilehash: a285cc8c0d24e36d6c00f336d0b3724a31c7af82
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43211300"
---
# <a name="typedef-enum-union-and-struct-attributes"></a>Attributi Typedef, Enum, Union e Struct

Gli attributi seguenti si applicano per la [typedef](https://msdn.microsoft.com/cc96cf26-ba93-4179-951e-695d1f5fdcf1), [struct](../cpp/struct-cpp.md), e [enum](../cpp/enumerations-cpp.md) parole chiave C++.

### <a name="typedef"></a>typedef

|Attributo|Descrizione|
|---------------|-----------------|
|[case](../windows/case-cpp.md)|Utilizzato con il [switch_type](../windows/switch-type.md) dell'attributo un **union**.|
|[custom](../windows/custom-cpp.md)|È possibile definire un attributo personalizzato.|
|[export](../windows/export.md)|Fa sì che una struttura di dati da inserire nel file IDL.|
|[first_is](../windows/first-is.md)|Specifica l'indice del primo elemento della matrice deve essere trasmesso.|
|[helpcontext](../windows/helpcontext.md)|Specifica un ID di contesto che consente all'utente di visualizzare informazioni sull'elemento corrente nel file della Guida.|
|[helpfile](../windows/helpfile.md)|Imposta il nome del file della Guida per una libreria dei tipi.|
|[helpstring](../windows/helpstring.md)|Specifica una stringa di caratteri usata per descrivere l'elemento a cui viene applicata.|
|[library_block](../windows/library-block.md)|Inserisce un costrutto nel blocco di libreria del file con estensione idl.|
|[ptr](../windows/ptr.md)|Definisce un puntatore come puntatore completo.|
|[public](../windows/public-cpp-attributes.md)|Assicura che un typedef entra in libreria dei tipi anche se non è presente all'interno del file con estensione idl.|
|[ref](../windows/ref-cpp.md)|Identifica un puntatore di riferimento.|
|[switch_is](../windows/switch-is.md)|Specifica l'espressione o un identificatore che agisce come l'unione discriminante che consente di selezionare il membro dell'unione.|
|[switch_type](../windows/switch-type.md)|Identifica il tipo della variabile utilizzata come l'unione discriminante.|
|[unique](../windows/unique-cpp.md)|Specifica un puntatore univoco.|
|[wire_marshal](../windows/wire-marshal.md)|Specifica un tipo di dati che verrà usato per la trasmissione anziché un tipo di dati specifici dell'applicazione.|

### <a name="enum"></a>enum

|Attributo|Descrizione|
|---------------|-----------------|
|[custom](../windows/custom-cpp.md)|È possibile definire un attributo personalizzato.|
|[export](../windows/export.md)|Fa sì che una struttura di dati da inserire nel file IDL.|
|[uuid](../windows/uuid-cpp-attributes.md)|Specifica l'ID univoco per una classe o interfaccia.|
|[v1_enum](../windows/v1-enum.md)|Indica che il tipo enumerato specificato deve essere trasmessi come un'entità a 32 bit, anziché il valore predefinito di 16 bit.|

### <a name="union"></a>union

|Attributo|Descrizione|
|---------------|-----------------|
|[custom](../windows/custom-cpp.md)|È possibile definire un attributo personalizzato.|
|[export](../windows/export.md)|Fa sì che una struttura di dati da inserire nel file IDL.|
|[first_is](../windows/first-is.md)|Specifica l'indice del primo elemento della matrice deve essere trasmesso.|
|[last_is](../windows/last-is.md)|Specifica l'indice dell'ultimo elemento di matrice deve essere trasmesso.|
|[length_is](../windows/length-is.md)|Specifica il numero di elementi della matrice deve essere trasmesso.|
|[max_is](../windows/max-is.md)|Definisce il valore massimo per un indice di matrice valida.|
|[size_is](../windows/size-is.md)|Specifica le dimensioni della memoria allocata per i puntatori con dimensioni, ridimensionati i puntatori ai puntatori a dimensioni e unidimensionali o le matrici multidimensionali.|
|[unique](../windows/unique-cpp.md)|Specifica un puntatore univoco.|
|[uuid](../windows/uuid-cpp-attributes.md)|Specifica l'ID univoco per una classe o interfaccia.|

### <a name="nonencapsulated-union"></a>Unione nonencapsulated

|Attributo|Descrizione|
|---------------|-----------------|
|[ms_union](../windows/ms-union.md)|Controlla l'allineamento di rappresentazione dei dati di rete di unioni nonencapsulated.|
|[no_injected_text](../windows/no-injected-text.md)|Impedisce al compilatore di inserire codice in seguito a uso dell'attributo.|

### <a name="struct"></a>struct

|Attributo|Descrizione|
|---------------|-----------------|
|[aggregatable](../windows/aggregatable.md)|Indica che la classe supporta l'aggregazione.|
|[aggregates](../windows/aggregates.md)|Indica che un controllo viene aggregata la classe di destinazione.|
|[appobject](../windows/appobject.md)|Identifica la coclasse come un oggetto applicazione che è associato a un'applicazione completa .exe e indica che le funzioni e le proprietà della coclasse sono disponibili a livello globale in questa libreria dei tipi.|
|[coclass](../windows/coclass.md)|Crea un controllo ActiveX.|
|[COM_INTERFACE_ENTRY](../windows/com-interface-entry-cpp.md)|Aggiunge una voce di interfaccia a una mappa COM.|
|[control](../windows/control.md)|Specifica che il tipo definito dall'utente è un controllo.|
|[custom](../windows/custom-cpp.md)|È possibile definire un attributo personalizzato.|
|[db_column](../windows/db-column.md)|Associa una colonna specificata al set di righe.|
|[db_command](../windows/db-command.md)|Crea un comando OLE DB.|
|[db_param](../windows/db-param.md)|Consente di associare la variabile di membro specificato con un parametro di input o output e delimita la variabile.|
|[db_source](../windows/db-source.md)|Crea una connessione a un'origine dati.|
|[db_table](../windows/db-table.md)|Apre una tabella di OLE DB.|
|[default](../windows/default-cpp.md)|Indica che l'interfaccia personalizzata o dispatch definita in una coclasse rappresenta l'interfaccia di programmabilità predefinita.|
|[defaultvtable](../windows/defaultvtable.md)|Definisce un'interfaccia come interfaccia predefinita vtable per un controllo.|
|[event_receiver](../windows/event-receiver.md)|Crea un ricevitore di eventi.|
|[event_source](../windows/event-source.md)|Crea un'origine evento.|
|[export](../windows/export.md)|Fa sì che una struttura di dati da inserire nel file IDL.|
|[first_is](../windows/first-is.md)|Specifica l'indice del primo elemento della matrice deve essere trasmesso.|
|[hidden](../windows/hidden.md)|Indica che l'elemento esiste ma non deve essere visualizzato in un browser orientate all'utente.|
|[implements_category](../windows/implements-category.md)|Specifica le categorie di componenti implementate per la classe.|
|[last_is](../windows/last-is.md)|Specifica l'indice dell'ultimo elemento di matrice deve essere trasmesso.|
|[length_is](../windows/length-is.md)|Specifica il numero di elementi della matrice deve essere trasmesso.|
|[max_is](../windows/max-is.md)|Definisce il valore massimo per un indice di matrice valida.|
|[requires_category](../windows/requires-category.md)|Specifica le categorie di componenti necessari della classe di destinazione.|
|[size_is](../windows/size-is.md)|Specifica le dimensioni della memoria allocata per i puntatori con dimensioni, ridimensionati i puntatori ai puntatori a dimensioni e unidimensionali o le matrici multidimensionali.|
|[source](../windows/source-cpp.md)|In una classe specifica le interfacce di origine dell'oggetto COM per i punti di connessione. In una proprietà o metodo, indica che il membro restituisce un oggetto o una variante che rappresenta l'origine degli eventi.|
|[Threading](../windows/threading-cpp.md)|Specifica il modello di threading per un oggetto COM.|
|[unique](../windows/unique-cpp.md)|Specifica un puntatore univoco.|
|[uuid](../windows/uuid-cpp-attributes.md)|Specifica l'ID univoco per una classe o interfaccia.|
|[version](../windows/version-cpp.md)|Identifica una particolare versione tra più versioni di una classe.|
|[vi_progid](../windows/vi-progid.md)|Specifica una forma indipendente dalla versione di ProgID.|

## <a name="see-also"></a>Vedere anche

[Attributi per utilizzo](../windows/attributes-by-usage.md)