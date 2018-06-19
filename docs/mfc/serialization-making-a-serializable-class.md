---
title: 'Serializzazione: Creazione di una classe serializzabile | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4412e8db861ac522c0f1b1d7192bfbb83612d64c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33383416"
---
# <a name="serialization-making-a-serializable-class"></a>Serializzazione: creazione di una classe serializzabile
Cinque passaggi principali sono necessarie per rendere una classe serializzabile. Vengono elencati e illustrati nelle sezioni seguenti:  
  
1.  [Derivare la classe da CObject](#_core_deriving_your_class_from_cobject) (o da una classe derivata da `CObject`).  
  
2.  [Si esegue l'override della funzione membro Serialize](#_core_overriding_the_serialize_member_function).  
  
3.  [Utilizzo della macro DECLARE_SERIAL](#_core_using_the_declare_serial_macro) nella dichiarazione di classe.  
  
4.  [Definizione di un costruttore che non accetta argomenti](#_core_defining_a_constructor_with_no_arguments).  
  
5.  [Utilizzo della macro IMPLEMENT_SERIAL nel file di implementazione](#_core_using_the_implement_serial_macro_in_the_implementation_file) per la classe.  
  
 Se si chiama `Serialize` direttamente anziché tramite la >> e << operatori di [CArchive](../mfc/reference/carchive-class.md), gli ultimi tre passaggi non sono necessari per la serializzazione.  
  
##  <a name="_core_deriving_your_class_from_cobject"></a> Derivare la classe da CObject  
 Il protocollo di serializzazione di base e le funzionalità sono definiti nel `CObject` classe. Derivando la classe da `CObject` (o da una classe derivata da `CObject`), come illustrato nella seguente dichiarazione di classe `CPerson`, è possibile accedere per il protocollo di serializzazione e la funzionalità di `CObject`.  
  
##  <a name="_core_overriding_the_serialize_member_function"></a> Si esegue l'override di serializzare funzione membro  
 Il `Serialize` funzione membro, che è definita nel `CObject` classe, è responsabile della serializzazione effettivamente i dati necessari per acquisire lo stato corrente dell'oggetto. Il `Serialize` funzione presenta un `CArchive` argomento che viene utilizzato per leggere e scrivere i dati dell'oggetto. Il [CArchive](../mfc/reference/carchive-class.md) oggetto dispone di una funzione membro, `IsStoring`, che indica se `Serialize` è l'archiviazione (scrittura di dati) o il caricamento (lettura di dati). Utilizzo dei risultati di `IsStoring` come guida, è di inserire dati dell'oggetto di `CArchive` oggetto con l'operatore di inserimento (**<\<**) o estrarre i dati con l'operatore di estrazione ( **>>**).  
  
 Si consideri una classe derivata da `CObject` e dispone di due nuove variabili membro, tipi di `CString` e **WORD**. Il frammento di dichiarazione di classe seguente mostra il nuovo membro variabili e la dichiarazione per sottoposto a override `Serialize` funzione membro:  
  
 [!code-cpp[NVC_MFCSerialization#1](../mfc/codesnippet/cpp/serialization-making-a-serializable-class_1.h)]  
  
#### <a name="to-override-the-serialize-member-function"></a>Per eseguire l'override della funzione membro Serialize  
  
1.  Chiamare la versione della classe base `Serialize` per assicurarsi che la parte ereditata dell'oggetto viene serializzata.  
  
2.  Inserire o estrarre le variabili membro specifiche della classe.  
  
     Gli operatori di inserimento e l'estrazione di interagire con la classe di archiviazione per leggere e scrivere i dati. Nell'esempio seguente viene illustrato come implementare `Serialize` per la `CPerson` classe dichiarata in precedenza:  
  
     [!code-cpp[NVC_MFCSerialization#2](../mfc/codesnippet/cpp/serialization-making-a-serializable-class_2.cpp)]  
  
 È inoltre possibile utilizzare il [CArchive::Read](../mfc/reference/carchive-class.md#read) e [CArchive::Write](../mfc/reference/carchive-class.md#write) funzioni membro per leggere e scrivere grandi quantità di dati non tipizzati.  
  
##  <a name="_core_using_the_declare_serial_macro"></a> Utilizzando DECLARE_SERIAL (macro)  
 Il `DECLARE_SERIAL` macro è necessaria nella dichiarazione di classi che supportano la serializzazione, come illustrato di seguito:  
  
 [!code-cpp[NVC_MFCSerialization#3](../mfc/codesnippet/cpp/serialization-making-a-serializable-class_3.h)]  
  
##  <a name="_core_defining_a_constructor_with_no_arguments"></a> Definizione di un costruttore senza argomenti  
 MFC è richiesto un costruttore predefinito per ricreare gli oggetti che vengono deserializzati (caricata dal disco). Il processo di deserializzazione verrà compilare tutte le variabili membro con i valori necessari per ricreare l'oggetto.  
  
 Questo costruttore può essere dichiarato pubblico, protetto o privato. Se si apportano protetto o privato, consente di verificare che solo essere utilizzato dalle funzioni di serializzazione. Il costruttore deve inserire l'oggetto in uno stato che consente di eliminarla se necessario.  
  
> [!NOTE]
>  Se si dimentica di definire un costruttore senza argomenti in una classe che utilizza il `DECLARE_SERIAL` e `IMPLEMENT_SERIAL` macro, si riceverà un avviso del compilatore "disponibile alcun costruttore predefinito" nella riga in cui il `IMPLEMENT_SERIAL` macro viene usata.  
  
##  <a name="_core_using_the_implement_serial_macro_in_the_implementation_file"></a> Utilizzo della Macro IMPLEMENT_SERIAL nel File di implementazione  
 Il `IMPLEMENT_SERIAL` macro viene usata per definire le varie funzioni necessarie quando si deriva una classe serializzabile da `CObject`. Utilizzare questa macro nel file di implementazione (. CPP) per la classe. I primi due argomenti per la macro sono il nome della classe e il nome della relativa classe base immediata.  
  
 Il terzo argomento di questa macro è un numero di schema. Il numero di schema è essenzialmente un numero di versione per gli oggetti della classe. Utilizzare un numero intero maggiore o uguale a 0 per il numero di schema. (Non confondere questo numero di schema con la terminologia di database).  
  
 Il codice di serializzazione MFC controlla il numero di schema durante la lettura di oggetti in memoria. Se il numero di schema dell'oggetto su disco non corrisponde al numero di schema della classe in memoria, la libreria genererà un `CArchiveException`, impedendo al programma di leggere una versione non corretta dell'oggetto.  
  
 Se si desidera il `Serialize` funzione membro per essere in grado di leggere più versioni, ovvero, ovvero i file scritti con diverse versioni dell'applicazione, è possibile utilizzare il valore **VERSIONABLE_SCHEMA** come argomento per il `IMPLEMENT_SERIAL` macro. Per informazioni sull'utilizzo e un esempio, vedere il `GetObjectSchema` funzione membro di classe `CArchive`.  
  
 Nell'esempio seguente viene illustrato come utilizzare `IMPLEMENT_SERIAL` per una classe, `CPerson`, che è derivato da `CObject`:  
  
 [!code-cpp[NVC_MFCSerialization#4](../mfc/codesnippet/cpp/serialization-making-a-serializable-class_4.cpp)]  
  
 Dopo aver creato una classe serializzabile, è possibile serializzare gli oggetti della classe, come descritto nell'articolo [serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Serializzazione](../mfc/serialization-in-mfc.md)

