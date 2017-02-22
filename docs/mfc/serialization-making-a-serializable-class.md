---
title: "Serializzazione: creazione di una classe serializzabile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi [C++], derivati"
  - "CObject (classe), derivazione di classi serializzabili"
  - "costruttori [C++], definizione senza argomenti"
  - "DECLARE_SERIAL (macro)"
  - "costruttore predefinito"
  - "impostazioni predefinite [C++], costruttore"
  - "IMPLEMENT_SERIAL (macro)"
  - "nessun costruttore predefinito"
  - "costruttore senza argomenti"
  - "classe serializzabile"
  - "serializzazione [C++], classi serializzabili"
  - "Serialize (metodo), override"
  - "VERSIONABLE_SCHEMA (macro)"
ms.assetid: 59a14d32-1cc8-4275-9829-99639beee27c
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Serializzazione: creazione di una classe serializzabile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Cinque passaggi principali necessari per creare una classe serializzabile.  Vengono elencati sotto e spiegato nelle sezioni seguenti:  
  
1.  [Derivare la classe da CObject](#_core_deriving_your_class_from_cobject) \(o da una classe derivata da `CObject`\).  
  
2.  [Eseguire l'override della funzione membro Serialize](#_core_overriding_the_serialize_member_function).  
  
3.  [L'utilizzo della macro di DECLARE\_SERIAL](#_core_using_the_declare_serial_macro) nella dichiarazione di classe.  
  
4.  [Definendo un costruttore che non accetta argomenti](#_core_defining_a_constructor_with_no_arguments).  
  
5.  [L'utilizzo della macro di IMPLEMENT\_SERIAL nel file di implementazione](#_core_using_the_implement_serial_macro_in_the_implementation_file) per la classe.  
  
 Se si chiama direttamente `Serialize` anziché tra \>\> gli operatori e \<\< di [CArchive](../mfc/reference/carchive-class.md), gli ultimi tre operazioni non sono richiesti per la serializzazione.  
  
##  <a name="_core_deriving_your_class_from_cobject"></a> Derivare la classe da CObject  
 Il protocollo e la funzionalità di base di serializzazione vengono definiti nella classe di `CObject`.  Derivare la classe da `CObject` \(o da una classe derivata da `CObject`\), come illustrato nella figura seguente dichiarazione di classe `CPerson`, l'accesso al protocollo di serializzazione e la funzionalità di `CObject`.  
  
##  <a name="_core_overriding_the_serialize_member_function"></a> Eseguire l'override della funzione membro Serialize  
 La funzione membro di `Serialize`, definita nella classe di `CObject`, è responsabile effettivamente di serializzare i dati necessari per acquisire lo stato corrente di un oggetto.  La funzione di `Serialize` dispone di un argomento di `CArchive` utilizzato per leggere e scrivere i dati object.  L'oggetto di [CArchive](../mfc/reference/carchive-class.md) contiene una funzione membro, `IsStoring`, che indica se `Serialize` memorizza \(scrittura di dati\) o caricamento \(dati di lettura\).  Utilizzando i risultati di `IsStoring` come guida, inserire i dati dell'oggetto nell'oggetto di `CArchive` con l'operatore di inserimento \(**\<\<**\) o dati estrai con l'operatore di estrazione \(**\>\>**\).  
  
 Si consideri una classe derivata da `CObject` e presenta due nuovi variabili membro, di tipi `CString` e **WORD**.  Nel frammento della dichiarazione di classe mostra nuove variabili membro e la dichiarazione della funzione membro ignorata di `Serialize` :  
  
 [!code-cpp[NVC_MFCSerialization#1](../mfc/codesnippet/CPP/serialization-making-a-serializable-class_1.h)]  
  
#### Per eseguire l'override della funzione membro Serialize  
  
1.  Chiamare la versione della classe base di `Serialize` per assicurarsi che la parte ereditata dell'oggetto venga serializzata.  
  
2.  Incollare o estrarre le variabili membro specifici alla classe.  
  
     Gli operatori di estrazione e di inserimento interagiscono con la classe di archiviazione per leggere e scrivere dati.  Nell'esempio seguente viene illustrato come implementare `Serialize` per la classe di `CPerson` dichiarata su:  
  
     [!code-cpp[NVC_MFCSerialization#2](../mfc/codesnippet/CPP/serialization-making-a-serializable-class_2.cpp)]  
  
 È inoltre possibile utilizzare le funzioni membro di [CArchive::Write](../Topic/CArchive::Write.md) e di [CArchive::Read](../Topic/CArchive::Read.md) per leggere e scrivere grandi quantità di dati non tipizzati.  
  
##  <a name="_core_using_the_declare_serial_macro"></a> L'utilizzo della macro di DECLARE\_SERIAL  
 La macro di `DECLARE_SERIAL` è obbligatoria nella dichiarazione di classi che supportano la serializzazione, come illustrato di seguito:  
  
 [!code-cpp[NVC_MFCSerialization#3](../mfc/codesnippet/CPP/serialization-making-a-serializable-class_3.h)]  
  
##  <a name="_core_defining_a_constructor_with_no_arguments"></a> Definizione del costruttore senza argomenti  
 MFC richiede un costruttore predefinito quando ricrea gli oggetti mentre sono deserializzati \(caricato da disco\).  Il processo di deserializzazione compilati tutti i membri variabili con valori necessari per ricreare l'oggetto.  
  
 Questo costruttore può essere dichiarata public, protected, o private.  Se è stata protetto o privato, è possibile assicurarsi che venga utilizzato solo da funzioni di serializzazione.  Il costruttore deve inserire l'oggetto in uno stato che consentono l'utilizzo da eliminare se necessario.  
  
> [!NOTE]
>  Se non si utilizza di definire un costruttore senza argomenti in una classe che utilizza le macro di `IMPLEMENT_SERIAL` e di `DECLARE_SERIAL`, si otterrà un "nessun costruttore predefinito" l'avviso compiler disponibile sulla riga in cui la macro di `IMPLEMENT_SERIAL` viene utilizzata.  
  
##  <a name="_core_using_the_implement_serial_macro_in_the_implementation_file"></a> L'utilizzo della macro di IMPLEMENT\_SERIAL nel file di implementazione  
 La macro di `IMPLEMENT_SERIAL` viene utilizzata per definire le varie funzioni necessarie quando si deriva una classe serializzabile da `CObject`.  Si utilizza questa macro nel file di implementazione \(.CPP\) della classe.  I primi due argomenti a macro sono il nome della classe e il nome della relativa classe di base immediata.  
  
 Il terzo argomento a questa macro è un numero dello schema.  Il numero dello schema è essenzialmente un numero di versione per gli oggetti della classe.  Utilizzare maggiore o uguale a 0 Integer per il numero dello schema. \(Non confondere questo numero dello schema con la terminologia del database.\)  
  
 I controlli di codice di serializzazione MFC il numero dello schema quando si leggono oggetti in memoria.  Se il numero dello schema dell'oggetto su disco non corrisponde al numero dello schema della classe nella memoria, la libreria genererà `CArchiveException`, impedendo al programma di leggere una versione non corretta dell'oggetto.  
  
 Se si desidera che la funzione membro di `Serialize` per poter leggere più versioni, ovvero file creati con versioni diverse dell'applicazione \- possibile utilizzare il valore **VERSIONABLE\_SCHEMA** come argomento alla macro di `IMPLEMENT_SERIAL`.  Per utilizzare le informazioni e un esempio, vedere la funzione membro di `GetObjectSchema` di classe `CArchive`.  
  
 Nell'esempio seguente viene illustrato come utilizzare `IMPLEMENT_SERIAL` per una classe, `CPerson`, derivata da `CObject`:  
  
 [!code-cpp[NVC_MFCSerialization#4](../mfc/codesnippet/CPP/serialization-making-a-serializable-class_4.cpp)]  
  
 Dopo avere creato una classe serializzabile, è possibile serializzare gli oggetti della classe, come illustrato nell'articolo [Serializzazione: Serializzare un oggetto](../mfc/serialization-serializing-an-object.md).  
  
## Vedere anche  
 [Serializzazione](../mfc/serialization-in-mfc.md)