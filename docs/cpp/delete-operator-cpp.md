---
title: Operatore Delete (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- delete_cpp
- delete
dev_langs:
- C++
helpviewer_keywords:
- delete keyword [C++], syntax
- delete keyword [C++], deallocating objects
- delete keyword [C++]
ms.assetid: de39c900-3f57-489c-9598-dcb73c4b3930
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: bfc2587b4d55ae0147adf797990139356d44cd30
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="delete-operator-c"></a>Operatore delete (C++)
Dealloca un blocco di memoria.  
  
## <a name="syntax"></a>Sintassi  
  
```  
[::] delete cast-expression  
[::] delete [ ] cast-expression  
```  
  
## <a name="remarks"></a>Note  
 Il *cast-expression* argomento deve essere un puntatore a un blocco di memoria allocato in precedenza per un oggetto creato con il [nuovo operatore](../cpp/new-operator-cpp.md). Il **eliminare** operatore ha un risultato di tipo `void` e pertanto non restituisce un valore. Ad esempio:  
  
```  
CDialog* MyDialog = new CDialog;  
// use MyDialog  
delete MyDialog;  
```  
  
 Utilizzando **eliminare** su un puntatore a un oggetto non è stato allocato con **nuova** risultati imprevedibili. Tuttavia, è possibile utilizzare **eliminare** su un puntatore con il valore 0. Ciò significa che, quando **nuova** restituisce 0 in caso di errore, il risultato di un'operazione di eliminazione **nuova** operazione è puramente informativo. Vedere [nuovo ed eliminare operatori](../cpp/new-and-delete-operators.md) per ulteriori informazioni.  
  
 Il **nuova** e **eliminare** operatori possono anche essere utilizzati per i tipi predefiniti, incluse le matrici. Se `pointer` fa riferimento a una matrice, inserire parentesi vuote prima di `pointer`:  
  
```  
int* set = new int[100];  
//use set[]  
delete [] set;  
```  
  
 Utilizzo di **eliminare** operatore su un oggetto dealloca la memoria. Un programma che dereferenzia un puntatore dopo l'eliminazione dell'oggetto può ottenere risultati imprevisti o un arresto anomalo.  
  
 Quando **eliminare** viene utilizzata per deallocare la memoria per un oggetto di classe C++, il distruttore dell'oggetto viene chiamato prima di deallocazione della memoria dell'oggetto (se l'oggetto ha un distruttore).  
  
 Se l'operando per il **eliminare** operatore è un l-value modificabile, il relativo valore sarà non definito dopo l'eliminazione dell'oggetto.  
  
## <a name="using-delete"></a>Utilizzo di delete  
 Esistono due varianti sintattiche per il [operatore delete](../cpp/delete-operator-cpp.md): uno per singoli oggetti e l'altro per le matrici di oggetti. Nel frammento di codice seguente viene illustrato in che modo differiscono:  
  
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
  
 Nei due casi seguenti vengono prodotti risultati non definiti: utilizzando la forma per le matrici di eliminazione (delete [ ]) su un oggetto e utilizzando la forma per le non matrici di eliminazione su una matrice.  
  
## <a name="example"></a>Esempio  
 Per esempi di utilizzo **eliminare**, vedere [nuovo operatore](../cpp/new-operator-cpp.md).  
  
## <a name="how-delete-works"></a>Funzionamento di delete  
 L'operatore delete richiama la funzione **operatore delete**.  
  
 Per gli oggetti non di tipo di classe ([classe](../cpp/class-cpp.md), [struct](../cpp/struct-cpp.md), o [unione](../cpp/unions.md)), viene richiamato l'operatore delete globale. Per oggetti di tipo classe, il nome della funzione di deallocazione viene risolto in ambito globale se l'espressione delete inizia con l'operatore di risoluzione dell'ambito (::) unario. In caso contrario, l'operatore delete richiama il distruttore di un oggetto prima della deallocazione di memoria (se il puntatore non ha valore null). L'operatore delete può essere definito in base alle classi; se non è presente una definizione per una determinata classe, l'operatore delete globale viene richiamato. Se l'espressione delete viene utilizzata per deallocare un oggetto di classe di tipo statico con un distruttore virtuale, la funzione di deallocazione viene risolta dal distruttore virtuale di tipo dinamico dell'oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)   
 [Parole chiave](../cpp/keywords-cpp.md)   
 [Operatori new e delete](../cpp/new-and-delete-operators.md)   
 

