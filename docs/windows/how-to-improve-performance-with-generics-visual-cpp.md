---
title: "How to: Improve Performance with Generics (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "performance, C++"
  - "Visual C++, performance"
  - "Visual C++, generics"
  - "generics [C++], performance"
ms.assetid: f14a175b-301f-46cc-86e4-c82d35f9aa3e
caps.latest.revision: 7
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Improve Performance with Generics (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Con i generics, è possibile creare codice riutilizzabile basato su un parametro di tipo.  Il tipo effettivo del parametro di tipo viene rimandato fino alla chiamata dal codice client.  Per ulteriori informazioni sui generics, vedere [Generics](../windows/generics-cpp-component-extensions.md).  
  
 Questo articolo discuterà come i generics consentono di aumentare le prestazioni di un'applicazione che utilizza le raccolte.  
  
## Esempio  
 Il Framework .NET viene fornito di molte classi di raccolta nello spazio dei nomi <xref:System.Collections?displayProperty=fullName>.  La maggior parte di queste raccolte funzionano su oggetti di tipo <xref:System.Object?displayProperty=fullName>.  Questo consente alle raccolte di memorizzare un qualsiasi tipo, poiché tutti i tipi disponibili nel Framework .NET, anche tipi di valore, derivano da <xref:System.Object?displayProperty=fullName>.  Tuttavia, esistono due svantaggi a questo approccio.  
  
 Innanzitutto, se la raccolta sta memorizzando tipi valore come gli integer, il valore deve essere boxed prima di aggiungerlo alla raccolta ed unboxed quando il valore viene recuperato dalla raccolta.  Queste sono operazioni onerose.  
  
 In secondo luogo, non è possibile determinare quali tipi possono essere aggiunti ad una raccolta.  È consentito aggiungere un integer e una stringa alla stessa raccolta, anche se probabilmente questo non era previsto.  Pertanto, affinché il codice sia indipendente dai tipi, è necessario controllare che il tipo recuperato dalla raccolta sia effettivamente quello previsto.  
  
 L'esempio di codice seguente mostra i due svantaggi principali delle raccolte .NET Framework prima dei generics.  
  
```  
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
    while (s->Count > 0)  
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
  
  **Estratta una stringa: Sette**  
**Estratto un int: 7**   
## Esempio  
 Il nuovo spazio dei nomi <xref:System.Collections.Generic?displayProperty=fullName> contiene molte delle stesse raccolte trovate nello spazio dei nomi <xref:System.Collections?displayProperty=fullName>, ma sono state modificate per accettare parametri di tipo generico.  Questo elimina i due svantaggi delle raccolte non generiche: il boxing e l'unboxing dei tipi di valore e l'impossibilità di specificare i tipi da archiviare nelle raccolte.  Le operazioni sulle due raccolte sono identiche; differiscono solo in come vengono istanziate.  
  
 Confrontare l'esempio riportato in precedenza con questo esempio che utilizza una raccolta generica <xref:System.Collections.Generic.Stack%601>.  Su raccolte di grandi dimensioni che vengono utilizzate spesso, le prestazioni di questo esempio sono molto migliori rispetto all'esempio precedente.  
  
```  
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
  
  **14**   
## Vedere anche  
 [Generics](../windows/generics-cpp-component-extensions.md)