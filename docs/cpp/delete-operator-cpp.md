---
title: Operatore delete (C++)
ms.date: 11/04/2016
f1_keywords:
- delete_cpp
helpviewer_keywords:
- delete keyword [C++], syntax
- delete keyword [C++], deallocating objects
- delete keyword [C++]
ms.assetid: de39c900-3f57-489c-9598-dcb73c4b3930
ms.openlocfilehash: 5e4f5685ea1bb8cd7c405373ba774fe36af08672
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50524726"
---
# <a name="delete-operator-c"></a>Operatore delete (C++)

Dealloca un blocco di memoria.

## <a name="syntax"></a>Sintassi

```
[::] delete cast-expression
[::] delete [ ] cast-expression
```

## <a name="remarks"></a>Note

Il *cast-expression* argomento deve essere un puntatore a un blocco di memoria allocato in precedenza per un oggetto creato con il [operatore new](../cpp/new-operator-cpp.md). Il **eliminare** operatore ha un risultato di tipo **void** e pertanto non restituisce un valore. Ad esempio:

```cpp
CDialog* MyDialog = new CDialog;
// use MyDialog
delete MyDialog;
```

Usando **eliminare** su un puntatore a un oggetto non allocato con **nuove** otterranno risultati imprevedibili. Tuttavia, è possibile utilizzare **eliminare** su un puntatore con il valore 0. Questo significa che, quando **nuove** restituisce 0 in caso di errore, il risultato di un'operazione di eliminazione **nuove** operazione è solo informativo. Visualizzare [la nuova ed eliminare operatori](../cpp/new-and-delete-operators.md) per altre informazioni.

Il **nuove** e **eliminare** operatori possono anche essere utilizzati per i tipi predefiniti, incluse le matrici. Se `pointer` fa riferimento a una matrice, inserire parentesi vuote prima di `pointer`:

```cpp
int* set = new int[100];
//use set[]
delete [] set;
```

Usando il **eliminare** operatore su un oggetto dealloca la memoria. Un programma che dereferenzia un puntatore dopo l'eliminazione dell'oggetto può ottenere risultati imprevisti o un arresto anomalo.

Quando **eliminare** viene utilizzata per deallocare memoria per un oggetto di classe C++, il distruttore dell'oggetto viene chiamato prima di deallocazione della memoria dell'oggetto (se l'oggetto ha un distruttore).

Se l'operando per il **eliminare** operatore è un l-value modificabile, il relativo valore è indefinito dopo che l'oggetto viene eliminato.

## <a name="using-delete"></a>Utilizzo di delete

Esistono due varianti sintattiche per il [operatore delete](../cpp/delete-operator-cpp.md): uno per singoli oggetti e l'altro per le matrici di oggetti. Nel frammento di codice seguente viene illustrato in che modo differiscono:

```cpp
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

Per esempi di utilizzo **eliminare**, vedere [operatore new](../cpp/new-operator-cpp.md).

## <a name="how-delete-works"></a>Funzionamento di delete

L'operatore delete richiama la funzione **operatore delete**.

Per gli oggetti non di tipo classe ([classe](../cpp/class-cpp.md), [struct](../cpp/struct-cpp.md), o [union](../cpp/unions.md)), viene richiamato l'operatore delete globale. Per oggetti di tipo classe, il nome della funzione di deallocazione viene risolto in ambito globale se l'espressione delete inizia con l'operatore di risoluzione dell'ambito (::) unario. In caso contrario, l'operatore delete richiama il distruttore di un oggetto prima della deallocazione di memoria (se il puntatore non ha valore null). L'operatore delete può essere definito in base alle classi; se non è presente una definizione per una determinata classe, l'operatore delete globale viene richiamato. Se l'espressione delete viene utilizzata per deallocare un oggetto di classe di tipo statico con un distruttore virtuale, la funzione di deallocazione viene risolta dal distruttore virtuale di tipo dinamico dell'oggetto.

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Operatori new e delete](../cpp/new-and-delete-operators.md)