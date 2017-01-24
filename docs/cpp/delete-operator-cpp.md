---
title: "Operatore delete (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "delete_cpp"
  - "delete"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "delete (parola chiave) [C++]"
  - "delete (parola chiave) [C++], deallocazione di oggetti"
  - "delete (parola chiave) [C++], sintassi"
ms.assetid: de39c900-3f57-489c-9598-dcb73c4b3930
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore delete (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Dealloca un blocco di memoria.  
  
## Sintassi  
  
```  
[::] delete cast-expression  
[::] delete [ ] cast-expression  
```  
  
## Note  
 L'argomento *cast\-expression* deve essere un puntatore a un blocco di memoria allocato in precedenza per un oggetto creato con l'[operatore new](../cpp/new-operator-cpp.md).  L'operatore **delete** ha un risultato di tipo `void` e quindi non restituisce un valore.  Ad esempio:  
  
```  
CDialog* MyDialog = new CDialog;  
// use MyDialog  
delete MyDialog;  
```  
  
 Se si usa **delete** su un puntatore per un oggetto non allocato con **new**, si otterranno risultati imprevedibili.  È tuttavia possibile usare **delete** su un puntatore con il valore 0.  Ciò significa che, quando **new** restituisce 0 in caso di errore, l'eliminazione del risultato di un'operazione **new** non riuscito non avrà alcuna conseguenza.  Per altre informazioni, vedere [Operatori new e delete](../cpp/new-and-delete-operators.md).  
  
 Gli operatori **new** e **delete** possono essere usati anche per i tipi incorporati, incluse le matrici.  Se `pointer` fa riferimento a una matrice, inserire parentesi vuote prima di `pointer`:  
  
```  
int* set = new int[100];  
//use set[]  
delete [] set;  
```  
  
 Se si usa l'operatore **delete** su un oggetto, verrà deallocata la rispettiva memoria.  Un programma che dereferenzia un puntatore dopo l'eliminazione dell'oggetto può ottenere risultati imprevisti o un arresto anomalo.  
  
 Se si usa **delete** per deallocare memoria da un oggetto di classe C\+\+, il distruttore dell'oggetto viene chiamato prima della deallocazione della memoria dell'oggetto, se l'oggetto ha un distruttore.  
  
 Se l'operando per l'operatore **delete** è un valore l modificabile, il rispettivo valore sarà non definito dopo l'eliminazione dell'oggetto.  
  
## Uso di delete  
 Esistono due varianti sintattiche per l'[operatore delete](../cpp/delete-operator-cpp.md): uno per i singoli oggetti e l'altro per le matrici di oggetti.  Il frammento di codice seguente illustra in che modo differiscono:  
  
```  
// expre_Using_delete.cpp  
struct UDType   
{  
};  
  
int main()  
{  
   // Allocate a user-defined object, UDObject, and an object  
   //  of type double on the free store using the  
   //  new operator.  
   UDType *UDObject = new UDType;  
   double *dObject = new double;  
   // Delete the two objects.  
   delete UDObject;  
   delete dObject;   
   // Allocate an array of user-defined objects on the  
   // free store using the new operator.  
   UDType (*UDArr)[7] = new UDType[5][7];  
   // Use the array syntax to delete the array of objects.  
   delete [] UDArr;  
}  
```  
  
 I due casi seguenti producono risultati non definiti: usando la forma per le matrici di eliminazione \(delete \[ \]\) su un oggetto e usando la forma per le non matrici di eliminazione su una matrice.  
  
## Esempio  
 Per esempi relativi all'uso di **delete**, vedere [Operatore new](../cpp/new-operator-cpp.md).  
  
## Funzionamento di delete  
 L'[operatore delete](../cpp/delete-operator-cpp.md) richiama la funzione [operatore delete](../misc/operator-delete-function.md).  
  
 Per oggetti non di tipo classe \([classe](../cpp/class-cpp.md), [struct](../cpp/struct-cpp.md) o [unione](../cpp/unions.md)\), viene richiamato l'operatore delete globale.  Per oggetti di tipo classe, il nome della funzione di deallocazione viene risolto in ambito globale se l'espressione delete inizia con l'operatore di risoluzione dell'ambito \(::\) unario.  In caso contrario, l'operatore delete richiama il distruttore di un oggetto prima della deallocazione di memoria \(se il puntatore non ha valore null\).  L'operatore delete può essere definito in base alle classi; se non è presente una definizione per una determinata classe, l'operatore delete globale viene richiamato.  Se l'espressione delete viene usata per deallocare un oggetto di classe di tipo statico con un distruttore virtuale, la funzione di deallocazione viene risolta dal distruttore virtuale di tipo dinamico dell'oggetto.  
  
## Vedere anche  
 [Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Operatori new e delete](../cpp/new-and-delete-operators.md)   
 [Funzione operator delete](../misc/operator-delete-function.md)