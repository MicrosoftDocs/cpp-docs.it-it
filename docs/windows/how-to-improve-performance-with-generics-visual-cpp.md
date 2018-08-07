---
title: 'Procedura: migliorare le prestazioni con i Generics (Visual C++) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- performance, C++
- Visual C++, performance
- Visual C++, generics
- generics [C++], performance
ms.assetid: f14a175b-301f-46cc-86e4-c82d35f9aa3e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d7e2476111ad5c0aaaeb5bed6fe8e806b4930071
ms.sourcegitcommit: d5d6bb9945c3550b8e8864b22b3a565de3691fde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/06/2018
ms.locfileid: "39571516"
---
# <a name="how-to-improve-performance-with-generics-visual-c"></a>Procedura: migliorare le prestazioni con i generics (Visual C++)
Con i generics, è possibile creare codice riutilizzabile basato su un parametro di tipo. Il tipo effettivo del parametro di tipo viene rinviato fino alla chiamata da parte del codice client. Per altre informazioni sui generics, vedere [Generics](../windows/generics-cpp-component-extensions.md).  
  
 In questo articolo viene illustrato il modo in cui i generics consentono di aumentare le prestazioni di un'applicazione in cui sono utilizzate le raccolte.  
  
## <a name="example"></a>Esempio  
 .NET Framework viene fornito con molte classi di raccolta nello spazio dei nomi <xref:System.Collections?displayProperty=fullName>. La maggior parte di queste raccolte funziona con oggetti di tipo <xref:System.Object?displayProperty=fullName>. In questo modo, nelle raccolte può essere archiviato qualsiasi tipo, poiché tutti i tipi disponibili in .NET Framework, anche quelli di valore, derivano da <xref:System.Object?displayProperty=fullName>. Tuttavia, questo approccio presenta due svantaggi.  
  
 Innanzitutto, se tramite la raccolta vengono archiviati tipi di valore come interi, il valore deve essere sottoposto a boxing prima di essere aggiunto alla raccolta e alla conversione unboxing quando il valore viene recuperato dalla raccolta. Si tratta di operazioni complesse.  
  
 In secondo luogo, non è possibile determinare quali tipi possono essere aggiunti a una raccolta. È consentito aggiungere un intero e una stringa alla stessa raccolta, anche se probabilmente non si tratta dell'operazione prevista. Pertanto, affinché il codice sia indipendente dai tipi, è necessario controllare che il tipo recuperato dalla raccolta sia effettivamente quello previsto.  
  
 Nell'esempio di codice seguente vengono mostrati i due svantaggi principali delle raccolte di .NET Framework prima dei generics.  
  
```cpp  
// perf_pre_generics.cpp  
// compile with: /clr  
  
using namespace System;  
using namespace System::Collections;  
  
int main()  
{  
    // This Stack can contain any type.  
    Stack ^s = gcnew Stack();  
  
    // Push an integer to the Stack.  
    // A boxing operation is performed here.  
    s->Push(7);  
  
    // Push a String to the same Stack.  
    // The Stack now contains two different data types.  
    s->Push("Seven");  
  
    // Pop the items off the Stack.  
    // The item is returned as an Object, so a cast is  
    // necessary to convert it to its proper type.  
    while (s->Count> 0)  
    {  
        Object ^o = s->Pop();  
        if (o->GetType() == Type::GetType("System.String"))  
        {  
            Console::WriteLine("Popped a String: {0}", (String ^)o);  
        }  
        else if (o->GetType() == Type::GetType("System.Int32"))  
        {  
            Console::WriteLine("Popped an int: {0}", (int)o);  
        }  
        else  
        {  
            Console::WriteLine("Popped an unknown type!");  
        }  
    }  
}  
```  
  
```Output  
Popped a String: Seven  
Popped an int: 7  
```  
  
## <a name="example"></a>Esempio  
 Nel nuovo spazio dei nomi <xref:System.Collections.Generic?displayProperty=fullName> sono contenute molte delle stesse raccolte disponibili nello spazio dei nomi <xref:System.Collections?displayProperty=fullName>, ma sono state modificate per accettare i parametri di tipo generico. In questo modo vengono eliminati i due svantaggi delle raccolte non generiche: il boxing e l'unboxing dei tipi di valore e l'impossibilità di specificare i tipi da archiviare nelle raccolte. Le operazioni nelle due raccolte sono identiche; l'unica differenza è la modalità di creazione di istanze.  
  
 Confrontare l'esempio riportato in precedenza con questo esempio in cui viene utilizzata una raccolta <xref:System.Collections.Generic.Stack%601> generica. In caso di raccolte di grandi dimensioni a cui l'accesso viene eseguito spesso, le prestazioni di questo esempio sono decisamente migliori rispetto all'esempio precedente.  
  
```cpp  
// perf_post_generics.cpp  
// compile with: /clr  
  
#using <System.dll>  
  
using namespace System;  
using namespace System::Collections::Generic;  
  
int main()  
{  
    // This Stack can only contain integers.  
    Stack<int> ^s = gcnew Stack<int>();  
  
    // Push an integer to the Stack.  
    // A boxing operation is performed here.  
    s->Push(7);  
    s->Push(14);  
  
    // You can no longer push a String to the same Stack.  
    // This will result in compile time error C2664.  
    //s->Push("Seven");  
  
    // Pop an item off the Stack.  
    // The item is returned as the type of the collection, so no  
    // casting is necessary and no unboxing is performed for  
    // value types.  
    int i = s->Pop();  
    Console::WriteLine(i);  
  
    // You can no longer retrieve a String from the Stack.  
    // This will result in compile time error C2440.  
    //String ^str = s->Pop();  
}  
```  
  
```Output  
14  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Generics](../windows/generics-cpp-component-extensions.md)