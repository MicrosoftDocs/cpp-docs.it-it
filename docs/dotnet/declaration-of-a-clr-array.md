---
title: "Dichiarazione di una matrice CLR | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "array (parola chiave) [C++]"
ms.assetid: 36a8883c-2663-43f0-a90c-28f27035e036
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Dichiarazione di una matrice CLR
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La sintassi per la dichiarazione, la creazione di un'istanza e l'inizializzazione di una matrice gestita è stata modificata in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] rispetto alle estensioni gestite di C\+\+.  
  
 Nelle estensioni gestite la dichiarazione di un oggetto matrice CLR rappresenta un'estensione della dichiarazione di matrice standard, in cui una parola chiave `__gc` viene inserita tra il nome dell'oggetto matrice e la relativa dimensione, eventualmente con virgole, come illustrato negli esempi riportati di seguito:  
  
```  
void PrintValues( Object* myArr __gc[]);  
void PrintValues( int myArr __gc[,,]);  
```  
  
 Ciò è stato semplificato nella nuova sintassi, in cui viene utilizzata una dichiarazione simile a un modello affine alla dichiarazione di `vector` di STL.  Il primo parametro indica il tipo di elemento.  Il secondo parametro specifica la dimensione della matrice. Poiché il valore predefinito è 1, è necessario un secondo argomento solo in caso di più dimensioni.  L'oggetto matrice costituisce un handle di rilevamento e deve pertanto essere dotato di accento circonflesso.  Se anche il tipo di elemento è un tipo di riferimento, anch'esso deve essere dotato di accento circonflesso.  Se espresso nella nuova sintassi, l'esempio precedente risulta come segue:  
  
```  
void PrintValues( array<Object^>^ myArr );  
void PrintValues( array<int,3>^ myArr );  
```  
  
 Poiché un tipo di riferimento è un handle di rilevamento anziché un oggetto, è possibile specificare una matrice CLR come il tipo restituito di una funzione \(ciò non è possibile per la matrice nativa\). Nelle estensioni gestite, la sintassi da utilizzare a tale scopo è poco intuitiva.  Di seguito è riportato un esempio.  
  
```  
Int32 f() [];  
int GetArray() __gc[];  
```  
  
 In [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] la dichiarazione è molto più semplice.  Di seguito è riportato un esempio:  
  
```  
array<Int32>^ f();  
array<int>^ GetArray();  
```  
  
 L'inizializzazione rapida di una matrice gestita locale è supportata in entrambe le versioni del linguaggio.  Di seguito è riportato un esempio.  
  
```  
int GetArray() __gc[] {  
   int a1 __gc[] = { 1, 2, 3, 4, 5 };  
   Object* myObjArray __gc[] = {   
      __box(26), __box(27), __box(28), __box(29), __box(30)  
   };  
   return a1;  
}  
```  
  
 La semplificazione risulta notevole nella nuova sintassi, in cui il boxing è implicito e l'operatore `__box` è stato pertanto eliminato. Per informazioni, vedere [Tipi di valore e relativi comportamenti \(C\+\+\/CLI\)](../dotnet/value-types-and-their-behaviors-cpp-cli.md).  
  
```  
array<int>^ GetArray() {  
   array<int>^ a1 = {1,2,3,4,5};  
   array<Object^>^ myObjArray = {26,27,28,29,30};  
   return a1;  
}  
```  
  
 Poiché una matrice è un tipo di riferimento CLR, la dichiarazione di ciascun oggetto matrice è un handle di rilevamento  ed è pertanto necessario allocare gli oggetti matrice nell'heap CLR. Nella notazione abbreviata, l'allocazione per l'heap gestito risulta nascosta. Di seguito viene riportata la forma esplicita dell'inizializzazione di un oggetto matrice nelle estensioni gestite:  
  
```  
Object* myArray[] = new Object*[2];  
String* myMat[,] = new String*[4,4];  
```  
  
 Nella nuova sintassi l'espressione `new` viene sostituita con `gcnew`.  Le grandezze delle dimensioni vengono passate come parametri all'espressione `gcnew`, come segue:  
  
```  
array<Object^>^ myArray = gcnew array<Object^>(2);  
array<String^,2>^ myMat = gcnew array<String^,2>(4,4);  
```  
  
 Nella nuova sintassi, l'espressione `gcnew` può essere seguita da un elenco di inizializzazione esplicita. Ciò non è supportato nelle estensioni gestite.  Di seguito è riportato un esempio.  
  
```  
// explicit initialization list following gcnew   
// was not supported in Managed Extensions  
array<Object^>^ myArray =   
   gcnew array<Object^>(4){ 1, 1, 2, 3 };  
```  
  
## Vedere anche  
 [Tipi gestiti \(C\+\+\/CL\)](../dotnet/managed-types-cpp-cl.md)   
 [Arrays](../windows/arrays-cpp-component-extensions.md)