---
title: Dichiarazioni e definizioni (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
ms.assetid: 678f1424-e12f-45e0-a957-8169e5fef6cb
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ea0f8210993e494cbd4795a2c4cf7c6c0afa8aa2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="declarations-and-definitions-c"></a>Dichiarazioni e definizioni (C++)
Le dichiarazioni introducono i nomi in un programma, ad esempio i nomi di variabili, gli spazi dei nomi, funzioni e classi. Le dichiarazioni specificano anche le informazioni sul tipo, oltre ad altre caratteristiche dell'oggetto in fase di dichiarazione. Un nome deve essere dichiarato prima di potere essere usato. In C++ il punto in cui viene dichiarato un nome determina se è visibile al compilatore. È possibile fare riferimento a una funzione o una classe dichiarata in un momento successivo nell'unità di compilazione; è possibile utilizzare *dichiarazioni con prototipo* per aggirare questa limitazione.  
  
 Le definizioni di specificare il codice o dati descrive il nome. Il compilatore necessita della definizione per allocare spazio di archiviazione per l'elemento che viene dichiarato.  
  
## <a name="declarations"></a>Dichiarazioni  
 Una dichiarazione introduce uno o più nomi in un programma. Le dichiarazioni possono ricorrere più volte in un programma. Di conseguenza, le classi, le strutture, i tipi enumerati e altri tipi definiti dall'utente possono essere dichiarati per ogni unità di compilazione. Il vincolo per questa dichiarazione multipla è che tutte le dichiarazioni devono essere identiche. Le dichiarazioni possono anche servire da definizioni, salvo quando la dichiarazione:  
  
1.  È un prototipo di funzione (una dichiarazione di funzione senza il corpo della funzione).  
  
2.  Contiene l'identificatore `extern` ma non l'inizializzatore (oggetti e variabili) o il corpo della funzione (funzioni). Ciò significa che la definizione non è necessariamente nell'unità di conversione corrente e fornisce il collegamento esterno del nome.  
  
3.  È un membro dati statici in una dichiarazione di classe.  
  
     Poiché i membri dati di classe statici sono specifiche variabili discrete condivise da tutti gli oggetti della classe, devono essere definiti e inizializzati all'esterno della dichiarazione di classe. (Per ulteriori informazioni sulle classi e membri delle classi, vedere [classi](../cpp/classes-and-structs-cpp.md).)  
  
4.  È la dichiarazione del nome di una classe senza una definizione che la segue, ad esempio `class T;`.  
  
5.  È un'istruzione `typedef`.  
  
 Esempi di dichiarazioni che sono anche le definizioni sono:  
  
```  
// Declare and define int variables i and j.  
int i;  
int j = 10;  
  
// Declare enumeration suits.  
enum suits { Spades = 1, Clubs, Hearts, Diamonds };  
  
// Declare class CheckBox.  
class CheckBox : public Control  
{  
public:  
            Boolean IsChecked();  
    virtual int     ChangeState() = 0;  
};  
```  
  
 Alcune dichiarazioni che non sono le definizioni sono:  
  
```  
  
extern int i;  
char *strchr( const char *Str, const char Target );  
```  
  
 Un nome viene considerato dichiarato immediatamente dopo il proprio dichiaratore e prima del proprio inizializzatore (quest'ultimo è facoltativo). Per ulteriori informazioni, vedere [punto di dichiarazione](../cpp/point-of-declaration-in-cpp.md).  
  
 Le dichiarazioni avvengono in un *ambito*. L'ambito controlla la visibilità del nome dichiarato e la durata dell'oggetto definito, se presente. Per ulteriori informazioni sulle modalità di interazione con le dichiarazioni di regole di ambito, vedere [ambito](../cpp/scope-visual-cpp.md).  
  
 Una dichiarazione dell'oggetto è anche una definizione, a meno che non contiene il `extern` identificatore classe di archiviazione descritte in [classi di archiviazione](storage-classes-cpp.md). Una dichiarazione di funzione è anche una definizione, a meno che non sia un prototipo. Un prototipo è un'intestazione di funzione senza un corpo di funzione di definizione. La definizione di un oggetto causa l'allocazione delle risorse di archiviazione e le inizializzazioni appropriate per tale oggetto.  
  
## <a name="definitions"></a>Definizioni  
 Una definizione è una specifica univoca di un oggetto, di una variabile, di una funzione, di una classe o di un enumeratore. Poiché le definizioni devono essere univoche, un programma può contenere una sola definizione per un determinato elemento del programma specificato. È possibile una corrispondenza molti a uno tra dichiarazioni e definizioni. Esistono due casi in cui un elemento del programma può essere dichiarato e non definito:  
  
1.  Una funzione è dichiarata ma non vi viene mai fatto riferimento tramite una chiamata di funzione o con un'espressione che accetta l'indirizzo della funzione.  
  
2.  Una classe viene usata solo in un modo in cui non richiede che la relativa definizione sia nota. Tuttavia, la classe deve essere dichiarata. Nel codice riportato di seguito è illustrata questa condizione:  
  
    ```  
    // definitions.cpp  
    class WindowCounter;   // Forward declaration; no definition  
  
    class Window  
    {  
       // Definition of WindowCounter not required  
       static WindowCounter windowCounter;  
    };  
  
    int main()  
    {  
    }  
    ```  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti di base](../cpp/basic-concepts-cpp.md)   
 [Punto di dichiarazione](../cpp/point-of-declaration-in-cpp.md)