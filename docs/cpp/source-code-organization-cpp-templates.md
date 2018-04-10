---
title: Origine dell'organizzazione di codice (modelli di C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-language
ms.tgt_pltfrm: ''
ms.topic: article
dev_langs:
- C++
ms.assetid: 50569c5d-0219-4966-9bcf-a8689074ad1d
caps.latest.revision: 5
manager: ghogen
ms.openlocfilehash: 1b3b17c17bad3834774f747548dda6710e178cb4
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="source-code-organization-c-templates"></a>Organizzazione di codice sorgente (modelli di C++)

Quando si definisce un modello di classe, è necessario organizzare il codice sorgente in modo che le definizioni dei membri sono visibili al compilatore quando li richiede.   È possibile scegliere di utilizzare il *modello inclusione* o *creazione esplicita di istanza* modello. Nel modello di inclusione, includere definizioni di membro in ogni file che utilizza un modello. Questo approccio è più semplice e offre la massima flessibilità in termini di quali tipi concreti possono essere utilizzati con il modello. Lo svantaggio è che è possibile aumentare i tempi di compilazione. L'impatto può essere significativo se un progetto e/o i file inclusi stessi sono di grandi dimensioni. Con l'approccio di creazione esplicita di istanza, il modello crea un'istanza concrete classi o membri di classe per tipi specifici.  Questo approccio può accelerare i tempi di compilazione, ma limita l'utilizzo solo alle classi che ha abilitato l'implementatore di modello anticipatamente. In generale, è consigliabile utilizzare il modello di inclusione a meno che i tempi di compilazione costituiscano un problema.  
  
## <a name="background"></a>Sfondo

 Modelli non sono come le classi normali nel senso che il compilatore non genera il codice oggetto per un modello o i relativi membri. Non c'è niente per generare fino a quando il modello viene creata un'istanza con tipi concreti. Quando il compilatore rileva un'istanza del modello, ad esempio `MyClass<int> mc;` e ancora non esiste alcuna classe con la firma, crea una nuova classe. Inoltre, tenta di generare il codice per tutte le funzioni membro che vengono utilizzati. Se tali definizioni sono in un file che non è #included, direttamente o indirettamente, nel file con estensione cpp che viene compilato, il compilatore non è possibile visualizzarli.  Dal punto di vista del compilatore, ciò non rappresenta necessariamente un errore perché le funzioni possono essere definite in un'altra unità di conversione, in cui il linker caso verrà trovarli.  Se il linker non trovare tale codice, viene generato un **esterno non risolto** errore.  

## <a name="the-inclusion-model"></a>Il modello di inclusione

 Il modo più semplice e più comune per rendere visibile in un'unità di conversione, definizioni di modello è inserire le definizioni nel file di intestazione.  Qualsiasi file con estensione cpp che usa il modello deve semplicemente #include l'intestazione. Si tratta dell'approccio utilizzato nella libreria Standard.  
  
```cpp
#ifndef MYARRAY  
#define MYARRAY  
#include <iostream>  
  
template<typename T, size_t N>  
class MyArray  
{  
    T arr[N];  
public:  
    // Full definitions:  
    MyArray(){}  
    void Print()  
    {  
        for (const auto v : arr)  
        {  
            std::cout << v << " , ";  
        }  
    }  
  
    T& operator[](int i)  
   {  
       return arr[i];  
   }   
};  
#endif  
```  
  
 Con questo approccio, il compilatore ha accesso alla definizione del modello completo e può creare un'istanza di modelli su richiesta per qualsiasi tipo. È semplice e relativamente facile da gestire. Tuttavia, il modello di inclusione con un costo in termini di tempi di compilazione.   Questo costo può essere significativo nei programmi di grandi dimensioni, soprattutto se l'intestazione del modello stesso #includes altre intestazioni. File di ogni cpp #includes l'intestazione otterrà la propria copia di modelli di funzione e tutte le definizioni. Il linker in genere sarà in grado di operazioni in modo che non si finisce con più definizioni per una funzione, ma il tempo per eseguire questa operazione. Programmi di dimensioni ridotte che il tempo di compilazione aggiuntiva probabilmente non è significativo.  
  
## <a name="the-explicit-instantiation-model"></a>Il modello di creazione esplicita di istanza

 Il modello di inclusione non è valido per il progetto, se è certo il set di tipi che verrà utilizzato per creare un'istanza di un modello, è possibile separare il codice del modello in un file con estensione h e cpp e nel file con estensione cpp creare in modo esplicito i modelli. In questo modo il codice oggetto deve essere generato che il compilatore verrà visualizzato quando viene rilevato creazioni di istanze utente.  
  
 Creazione di un'istanza esplicita è creare usando il modello di parola chiave seguito dalla firma dell'entità che si desidera creare un'istanza. Può trattarsi di un tipo o un membro. Se si crea un'istanza in modo esplicito un tipo, vengono creata un'istanza di tutti i membri.  
  
```cpp
template MyArray<double, 5>;  
```  
  
```cpp
//MyArray.h  
#ifndef MYARRAY  
#define MYARRAY  
  
template<typename T, size_t N>  
class MyArray  
{  
    T arr[N];  
public:  
    MyArray();  
    void Print();  
    T& operator[](int i);  
};  
#endif  
  
//MyArray.cpp  
#include "stdafx.h"  
#include <iostream>  
#include "MyArray.h"  
  
using namespace std;  
  
template<typename T, size_t N>  
MyArray<T,N>::MyArray(){}  
  
template<typename T, size_t N>  
void MyArray<T,N>::Print()  
{  
    for(const auto v : arr)  
    {  
        cout << v << "'";  
    }  
    cout << endl;  
}  
  
template MyArray<double, 5>;template MyArray<string, 5>;  
```  
  
 Nell'esempio precedente, creazioni di istanze esplicite sono nella parte inferiore del file con estensione cpp. Oggetto `MyArray` può essere usata solo per **doppie** o **stringa** tipi.  
  
> [!NOTE]
>  In C++ 11 il **esportare** (parola chiave) è stata deprecata nel contesto di definizioni di modello. In termini pratici ha un impatto ridotto perché la maggior parte dei compilatori non supportavano mai.
