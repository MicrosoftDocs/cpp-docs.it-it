---
description: 'Altre informazioni su: serializzazione: creazione di una classe serializzabile'
title: 'Serializzazione: creazione di una classe serializzabile'
ms.date: 11/04/2016
helpviewer_keywords:
- serializable class [MFC]
- DECLARE_SERIAL macro [MFC]
- default constructor [MFC]
- VERSIONABLE_SCHEMA macro [MFC]
- classes [MFC], derived
- IMPLEMENT_SERIAL macro [MFC]
- no-arguments constructor [MFC]
- Serialize method, overriding
- defaults [MFC], constructor
- CObject class [MFC], deriving serializable classes
- constructors [MFC], defining with no arguments
- serialization [MFC], serializable classes
- no default constructor
ms.assetid: 59a14d32-1cc8-4275-9829-99639beee27c
ms.openlocfilehash: 21c45887199768094953066818acfe1b87d8d45d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97217536"
---
# <a name="serialization-making-a-serializable-class"></a>Serializzazione: creazione di una classe serializzabile

Per rendere serializzabile una classe sono necessari cinque passaggi principali. Sono elencate di seguito e illustrate nelle sezioni seguenti:

1. [Derivare la classe da CObject](#_core_deriving_your_class_from_cobject) (o da una classe derivata da `CObject` ).

1. [Override della funzione membro Serialize](#_core_overriding_the_serialize_member_function).

1. [Uso della macro DECLARE_SERIAL](#_core_using_the_declare_serial_macro) nella dichiarazione di classe.

1. [Definizione di un costruttore che non accetta argomenti](#_core_defining_a_constructor_with_no_arguments).

1. [Uso della macro IMPLEMENT_SERIAL nel file di implementazione](#_core_using_the_implement_serial_macro_in_the_implementation_file) per la classe.

Se si chiama `Serialize` direttamente anziché tramite gli operatori >> e << di [CArchive](../mfc/reference/carchive-class.md), gli ultimi tre passaggi non sono necessari per la serializzazione.

## <a name="deriving-your-class-from-cobject"></a><a name="_core_deriving_your_class_from_cobject"></a> Derivazione della classe da CObject

Il protocollo e la funzionalità di serializzazione di base sono definiti nella `CObject` classe. Derivando la classe da `CObject` (o da una classe derivata da `CObject` ), come illustrato nella seguente dichiarazione della classe `CPerson` , si ottiene l'accesso al protocollo e alla funzionalità di serializzazione di `CObject` .

## <a name="overriding-the-serialize-member-function"></a><a name="_core_overriding_the_serialize_member_function"></a> Override della funzione membro Serialize

La `Serialize` funzione membro, definita nella `CObject` classe, è responsabile della serializzazione effettiva dei dati necessari per acquisire lo stato corrente di un oggetto. La `Serialize` funzione ha un `CArchive` argomento che usa per leggere e scrivere i dati dell'oggetto. L'oggetto [CArchive](../mfc/reference/carchive-class.md) ha una funzione membro, `IsStoring` , che indica se è in corso l' `Serialize` archiviazione (scrittura di dati) o il caricamento (lettura dei dati). Utilizzando i risultati di `IsStoring` come guida, è possibile inserire i dati dell'oggetto nell' `CArchive` oggetto con l'operatore di inserimento ( **<\<**) or extract data with the extraction operator (**>>** ).

Si consideri una classe derivata da `CObject` e con due nuove variabili membro, di tipi `CString` e **Word**. Il frammento di dichiarazione di classe seguente mostra le nuove variabili membro e la dichiarazione per la funzione membro sottoposta a override `Serialize` :

[!code-cpp[NVC_MFCSerialization#1](../mfc/codesnippet/cpp/serialization-making-a-serializable-class_1.h)]

#### <a name="to-override-the-serialize-member-function"></a>Per eseguire l'override della funzione membro Serialize

1. Chiamare la versione della classe base di `Serialize` per assicurarsi che la parte ereditata dell'oggetto venga serializzata.

1. Inserire o estrarre le variabili membro specifiche della classe.

   Gli operatori di inserimento ed estrazione interagiscono con la classe Archive per leggere e scrivere i dati. Nell'esempio seguente viene illustrato come implementare `Serialize` per la `CPerson` classe dichiarata in precedenza:

   [!code-cpp[NVC_MFCSerialization#2](../mfc/codesnippet/cpp/serialization-making-a-serializable-class_2.cpp)]

È anche possibile usare le funzioni membro [CArchive:: Read](../mfc/reference/carchive-class.md#read) e [CArchive:: Write](../mfc/reference/carchive-class.md#write) per leggere e scrivere grandi quantità di dati non tipizzati.

## <a name="using-the-declare_serial-macro"></a><a name="_core_using_the_declare_serial_macro"></a> Uso della macro DECLARE_SERIAL

La macro DECLARE_SERIAL è obbligatoria nella dichiarazione delle classi che supporteranno la serializzazione, come illustrato di seguito:

[!code-cpp[NVC_MFCSerialization#3](../mfc/codesnippet/cpp/serialization-making-a-serializable-class_3.h)]

## <a name="defining-a-constructor-with-no-arguments"></a><a name="_core_defining_a_constructor_with_no_arguments"></a> Definizione di un costruttore senza argomenti

MFC richiede un costruttore predefinito quando crea nuovamente gli oggetti quando vengono deserializzati (caricati dal disco). Il processo di deserializzazione compilerà tutte le variabili membro con i valori necessari per ricreare l'oggetto.

Questo costruttore può essere dichiarato public, protected o private. Se la si rende protetta o privata, assicurarsi che venga utilizzata solo dalle funzioni di serializzazione. Il costruttore deve inserire l'oggetto in uno stato che ne consente l'eliminazione, se necessario.

> [!NOTE]
> Se si dimentica di definire un costruttore senza argomenti in una classe che usa le macro DECLARE_SERIAL e IMPLEMENT_SERIAL, verrà visualizzato un avviso del compilatore "nessun costruttore predefinito disponibile" sulla riga in cui viene usata la macro di IMPLEMENT_SERIAL.

## <a name="using-the-implement_serial-macro-in-the-implementation-file"></a><a name="_core_using_the_implement_serial_macro_in_the_implementation_file"></a> Uso della macro IMPLEMENT_SERIAL nel file di implementazione

La macro IMPLEMENT_SERIAL viene utilizzata per definire le varie funzioni necessarie per la derivazione di una classe serializzabile da `CObject` . Questa macro viene usata nel file di implementazione (. CPP) per la classe. I primi due argomenti della macro sono il nome della classe e il nome della classe di base immediata.

Il terzo argomento della macro è un numero di schema. Il numero dello schema è essenzialmente un numero di versione per gli oggetti della classe. Usare un numero intero maggiore o uguale a 0 per il numero dello schema. Non confondere questo numero di schema con la terminologia del database.

Il codice di serializzazione MFC controlla il numero dello schema durante la lettura degli oggetti in memoria. Se il numero dello schema dell'oggetto su disco non corrisponde al numero dello schema della classe in memoria, la libreria genererà un'operazione che `CArchiveException` impedisce al programma di leggere una versione non corretta dell'oggetto.

Se si vuole che la `Serialize` funzione membro sia in grado di leggere più versioni, ovvero file scritti con versioni diverse dell'applicazione, è possibile usare il valore *VERSIONABLE_SCHEMA* come argomento della macro IMPLEMENT_SERIAL. Per informazioni sull'utilizzo e un esempio, vedere la `GetObjectSchema` funzione membro della classe `CArchive` .

Nell'esempio seguente viene illustrato come utilizzare IMPLEMENT_SERIAL per una classe, `CPerson` , derivata da `CObject` :

[!code-cpp[NVC_MFCSerialization#4](../mfc/codesnippet/cpp/serialization-making-a-serializable-class_4.cpp)]

Quando si dispone di una classe serializzabile, è possibile serializzare gli oggetti della classe, come illustrato nell'articolo [serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md).

## <a name="see-also"></a>Vedi anche

[Serializzazione](../mfc/serialization-in-mfc.md)
