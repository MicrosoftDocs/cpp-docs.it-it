---
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
ms.openlocfilehash: 9648bd4f516a5f174534336b1ca3b42bb51ca0c4
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372710"
---
# <a name="serialization-making-a-serializable-class"></a>Serializzazione: creazione di una classe serializzabile

Per rendere serializzabile una classe sono necessari cinque passaggi principali. Sono elencati di seguito e spiegati nelle seguenti sezioni:

1. [Derivazione della classe da CObject](#_core_deriving_your_class_from_cobject) (o `CObject`da una classe derivata da ).

1. [Override della funzione membro Serialize](#_core_overriding_the_serialize_member_function).

1. [Utilizzo della macro DECLARE_SERIAL](#_core_using_the_declare_serial_macro) nella dichiarazione di classe.

1. [Definizione di un costruttore che non accetta argomenti](#_core_defining_a_constructor_with_no_arguments).

1. [Utilizzo della macro IMPLEMENT_SERIAL nel file](#_core_using_the_implement_serial_macro_in_the_implementation_file) di implementazione della classe.

Se si `Serialize` chiama direttamente anziché tramite gli operatori >> e << di [CArchive](../mfc/reference/carchive-class.md), gli ultimi tre passaggi non sono necessari per la serializzazione.

## <a name="deriving-your-class-from-cobject"></a><a name="_core_deriving_your_class_from_cobject"></a>Derivazione della classe da CObjectDeriving Your Class from CObject

Il protocollo e la funzionalità `CObject` di serializzazione di base sono definiti nella classe. Derivando la classe `CObject` da (o da `CObject`una classe derivata da `CPerson`), come illustrato nella dichiarazione `CObject`riportata di seguito di class , si ottiene l'accesso al protocollo di serializzazione e alla funzionalità di .

## <a name="overriding-the-serialize-member-function"></a><a name="_core_overriding_the_serialize_member_function"></a>Override della funzione membro Serialize

La `Serialize` funzione membro, definita `CObject` nella classe, è responsabile della serializzazione effettiva dei dati necessari per acquisire lo stato corrente di un oggetto. La `Serialize` funzione `CArchive` dispone di un argomento che utilizza per leggere e scrivere i dati dell'oggetto. Il [CArchive](../mfc/reference/carchive-class.md) oggetto dispone `IsStoring`di una funzione `Serialize` membro, , che indica se è l'archiviazione (scrittura di dati) o il caricamento (lettura dei dati). Utilizzando i `IsStoring` risultati di come guida, è possibile inserire `CArchive` i dati dell'oggetto nell'oggetto con l'operatore di inserimento (**<**) oppure estrarre i dati con l'operatore di estrazione ( ).**>>**

Si consideri una `CObject` classe derivata da e `CString` con due nuove variabili membro, di tipi e **WORD**. Il frammento di dichiarazione di classe seguente mostra `Serialize` le nuove variabili membro e la dichiarazione per la funzione membro sottoposta a override:

[!code-cpp[NVC_MFCSerialization#1](../mfc/codesnippet/cpp/serialization-making-a-serializable-class_1.h)]

#### <a name="to-override-the-serialize-member-function"></a>Per eseguire l'override della funzione membro Serialize

1. Chiamare la versione `Serialize` della classe base di per assicurarsi che la parte ereditata dell'oggetto venga serializzata.

1. Inserire o estrarre le variabili membro specifiche della classe.

   Gli operatori di inserimento ed estrazione interagiscono con la classe di archivio per leggere e scrivere i dati. Nell'esempio seguente viene `Serialize` illustrato `CPerson` come implementare per la classe dichiarata in precedenza:The following example shows how to implement for the class declared above:

   [!code-cpp[NVC_MFCSerialization#2](../mfc/codesnippet/cpp/serialization-making-a-serializable-class_2.cpp)]

È inoltre possibile utilizzare le funzioni membro [CArchive::Read](../mfc/reference/carchive-class.md#read) e [CArchive::Write](../mfc/reference/carchive-class.md#write) per leggere e scrivere grandi quantità di dati non tipati.

## <a name="using-the-declare_serial-macro"></a><a name="_core_using_the_declare_serial_macro"></a>Utilizzo della macro DECLARE_SERIAL

La macro DECLARE_SERIAL è necessaria nella dichiarazione delle classi che supportano la serializzazione, come illustrato di seguito:The DECLARE_SERIAL macro is required in the declaration of classes that will support serialization, as shown here:

[!code-cpp[NVC_MFCSerialization#3](../mfc/codesnippet/cpp/serialization-making-a-serializable-class_3.h)]

## <a name="defining-a-constructor-with-no-arguments"></a><a name="_core_defining_a_constructor_with_no_arguments"></a>Definizione di un costruttore senza argomentiDefining a Constructor with No Arguments

MFC richiede un costruttore predefinito quando ricrea gli oggetti quando vengono deserializzati (caricati dal disco). Il processo di deserializzazione riempirà tutte le variabili membro con i valori necessari per ricreare l'oggetto.

Questo costruttore può essere dichiarato public, protected o private. Se lo si rende protetto o privato, è possibile assicurarsi che verrà utilizzato solo dalle funzioni di serializzazione. Il costruttore deve inserire l'oggetto in uno stato che ne consente l'eliminazione, se necessario.

> [!NOTE]
> Se si dimentica di definire un costruttore senza argomenti in una classe che utilizza le macro DECLARE_SERIAL e IMPLEMENT_SERIAL, verrà visualizzato un avviso del compilatore "nessun costruttore predefinito disponibile" nella riga in cui viene utilizzata la macro IMPLEMENT_SERIAL.

## <a name="using-the-implement_serial-macro-in-the-implementation-file"></a><a name="_core_using_the_implement_serial_macro_in_the_implementation_file"></a>Utilizzo della macro IMPLEMENT_SERIAL nel file di implementazione

La macro IMPLEMENT_SERIAL viene utilizzata per definire le varie funzioni necessarie `CObject`quando si deriva una classe serializzabile da . Utilizzare questa macro nel file di implementazione (. CPP) per la classe. I primi due argomenti della macro sono il nome della classe e il nome della relativa classe base immediata.

Il terzo argomento di questa macro è un numero di schema. Il numero di schema è essenzialmente un numero di versione per gli oggetti della classe. Utilizzare un numero intero maggiore o uguale a 0 per il numero di schema. (Non confondere questo numero di schema con la terminologia del database.)

Il codice di serializzazione MFC controlla il numero di schema durante la lettura di oggetti in memoria. Se il numero di schema dell'oggetto su disco non corrisponde al numero `CArchiveException`di schema della classe in memoria, la libreria genererà un , impedendo al programma di leggere una versione non corretta dell'oggetto.

Se si `Serialize` desidera che la funzione membro sia in grado di leggere più versioni, ovvero i file scritti con versioni diverse dell'applicazione, è possibile utilizzare il valore *VERSIONABLE_SCHEMA* come argomento della macro IMPLEMENT_SERIAL. Per informazioni sull'utilizzo e `GetObjectSchema` un esempio, vedere la funzione membro della classe `CArchive`.

Nell'esempio riportato di seguito viene `CPerson`illustrato come `CObject`utilizzare IMPLEMENT_SERIAL per una classe, , derivata da :

[!code-cpp[NVC_MFCSerialization#4](../mfc/codesnippet/cpp/serialization-making-a-serializable-class_4.cpp)]

Una volta che si dispone di una classe serializzabile, è possibile serializzare gli oggetti della classe , come descritto nell'articolo [Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md).

## <a name="see-also"></a>Vedere anche

[Serializzazione](../mfc/serialization-in-mfc.md)
