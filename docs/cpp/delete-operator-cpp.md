---
title: Operatore delete (C++)
ms.date: 08/12/2019
f1_keywords:
- delete_cpp
helpviewer_keywords:
- delete keyword [C++], syntax
- delete keyword [C++], deallocating objects
- delete keyword [C++]
ms.assetid: de39c900-3f57-489c-9598-dcb73c4b3930
ms.openlocfilehash: 19f92e2aa62adf1ede4c0e6ab1187fd9e4106e68
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87221692"
---
# <a name="delete-operator-c"></a>Operatore delete (C++)

Dealloca un blocco di memoria.

## <a name="syntax"></a>Sintassi

> [ `::` ] `delete` *cast-expression*\
> [ `::` ] `delete []` *cast-expression*

## <a name="remarks"></a>Osservazioni

L'argomento *cast-expression* deve essere un puntatore a un blocco di memoria allocato in precedenza per un oggetto creato con l' [operatore New](../cpp/new-operator-cpp.md). L' **`delete`** operatore ha un risultato di tipo **`void`** e pertanto non restituisce alcun valore. Ad esempio:

```cpp
CDialog* MyDialog = new CDialog;
// use MyDialog
delete MyDialog;
```

L'utilizzo di **`delete`** su un puntatore a un oggetto non allocato con **`new`** fornisce risultati imprevedibili. È tuttavia possibile utilizzare **`delete`** su un puntatore con il valore 0. Questo provisioning significa che, quando **`new`** restituisce 0 in caso di errore, l'eliminazione del risultato di un'operazione non riuscita **`new`** è innocua. Per ulteriori informazioni, vedere [gli operatori new e Delete](../cpp/new-and-delete-operators.md).

Gli **`new`** **`delete`** operatori e possono essere utilizzati anche per i tipi incorporati, incluse le matrici. Se `pointer` fa riferimento a una matrice, inserire parentesi vuote ( `[]` ) prima di `pointer` :

```cpp
int* set = new int[100];
//use set[]
delete [] set;
```

L'utilizzo dell' **`delete`** operatore su un oggetto dealloca la memoria. Un programma che dereferenzia un puntatore dopo l'eliminazione dell'oggetto può ottenere risultati imprevisti o un arresto anomalo.

Quando **`delete`** viene usato per deallocare la memoria per un oggetto della classe C++, il distruttore dell'oggetto viene chiamato prima della deallocazione della memoria dell'oggetto (se l'oggetto ha un distruttore).

Se l'operando per l' **`delete`** operatore è un l-value modificabile, il relativo valore non è definito dopo l'eliminazione dell'oggetto.

Se viene specificata l'opzione del compilatore [/SDL (Enable Additional Security Checks)](/cpp/build/reference/sdl-enable-additional-security-checks) , l'operando dell' **`delete`** operatore viene impostato su un valore non valido dopo l'eliminazione dell'oggetto.

## <a name="using-delete"></a>Utilizzo di delete

Esistono due varianti sintattiche per l' [operatore delete](../cpp/delete-operator-cpp.md): una per gli oggetti singoli e l'altra per le matrici di oggetti. Il frammento di codice seguente illustra come sono diversi:

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

I due casi seguenti producono risultati non definiti: utilizzando la forma di matrice di Delete ( `delete []` ) su un oggetto e utilizzando il formato non di matrice di Delete in una matrice.

## <a name="example"></a>Esempio

Per esempi relativi all'uso di **`delete`** , vedere [new operator](../cpp/new-operator-cpp.md).

## <a name="how-delete-works"></a>Funzionamento di delete

L'operatore delete richiama l'operatore Function **Delete**.

Per gli oggetti non di tipo classe ([Class](../cpp/class-cpp.md), [struct](../cpp/struct-cpp.md)o [Union](../cpp/unions.md)) viene richiamato l'operatore delete globale. Per gli oggetti di tipo classe, il nome della funzione di deallocazione viene risolto nell'ambito globale se l'espressione delete inizia con l'operatore di risoluzione dell'ambito unario ( `::` ). In caso contrario, l'operatore delete richiama il distruttore di un oggetto prima della deallocazione di memoria (se il puntatore non ha valore null). L'operatore delete può essere definito in base alle classi; se non è presente una definizione per una determinata classe, l'operatore delete globale viene richiamato. Se l'espressione delete viene utilizzata per deallocare un oggetto di classe di tipo statico con un distruttore virtuale, la funzione di deallocazione viene risolta dal distruttore virtuale di tipo dinamico dell'oggetto.

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)\
[Parole](../cpp/keywords-cpp.md)\
[Operatori new e Delete](../cpp/new-and-delete-operators.md)
