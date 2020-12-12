---
description: 'Altre informazioni su: costruttori di spostamento e operatori di assegnazione di spostamento (C++)'
title: 'Procedura: definire costruttori di spostamento e operatori di assegnazione di spostamento (C++)'
ms.date: 03/05/2018
helpviewer_keywords:
- move constructor [C++]
ms.assetid: e75efe0e-4b74-47a9-96ed-4e83cfc4378d
ms.openlocfilehash: 9430f4970a0f911000c31b142ed177aee7dff2d2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97313970"
---
# <a name="move-constructors-and-move-assignment-operators-c"></a>Costruttori di spostamento e operatori di assegnazione di spostamento (C++)

In questo argomento viene descritto come scrivere un *costruttore di spostamento* e un operatore di assegnazione di spostamento per una classe C++. Un costruttore di spostamento consente lo spostamento delle risorse di proprietà di un oggetto rvalue in un lvalue senza copia. Per ulteriori informazioni sulla semantica di spostamento, vedere [dichiaratore di riferimento rvalue:  &&](../cpp/rvalue-reference-declarator-amp-amp.md).

Questo argomento si basa sulla seguente classe C++, `MemoryBlock`, che gestisce un buffer di memoria.

```cpp
// MemoryBlock.h
#pragma once
#include <iostream>
#include <algorithm>

class MemoryBlock
{
public:

   // Simple constructor that initializes the resource.
   explicit MemoryBlock(size_t length)
      : _length(length)
      , _data(new int[length])
   {
      std::cout << "In MemoryBlock(size_t). length = "
                << _length << "." << std::endl;
   }

   // Destructor.
   ~MemoryBlock()
   {
      std::cout << "In ~MemoryBlock(). length = "
                << _length << ".";

      if (_data != nullptr)
      {
         std::cout << " Deleting resource.";
         // Delete the resource.
         delete[] _data;
      }

      std::cout << std::endl;
   }

   // Copy constructor.
   MemoryBlock(const MemoryBlock& other)
      : _length(other._length)
      , _data(new int[other._length])
   {
      std::cout << "In MemoryBlock(const MemoryBlock&). length = "
                << other._length << ". Copying resource." << std::endl;

      std::copy(other._data, other._data + _length, _data);
   }

   // Copy assignment operator.
   MemoryBlock& operator=(const MemoryBlock& other)
   {
      std::cout << "In operator=(const MemoryBlock&). length = "
                << other._length << ". Copying resource." << std::endl;

      if (this != &other)
      {
         // Free the existing resource.
         delete[] _data;

         _length = other._length;
         _data = new int[_length];
         std::copy(other._data, other._data + _length, _data);
      }
      return *this;
   }

   // Retrieves the length of the data resource.
   size_t Length() const
   {
      return _length;
   }

private:
   size_t _length; // The length of the resource.
   int* _data; // The resource.
};
```

Nelle procedure seguenti viene descritto come scrivere un costruttore di spostamento e un operatore di assegnazione di spostamento per la classe C++ di esempio.

### <a name="to-create-a-move-constructor-for-a-c-class"></a>Per creare un costruttore di spostamento per una classe C++

1. Definire un metodo del costruttore vuoto che accetti come parametro un riferimento rvalue al tipo della classe, come illustrato nel seguente esempio:

    ```cpp
    MemoryBlock(MemoryBlock&& other)
       : _data(nullptr)
       , _length(0)
    {
    }
    ```

1. Nel costruttore di spostamento assegnare i membri dati della classe dall'oggetto di origine all'oggetto che viene costruito:

    ```cpp
    _data = other._data;
    _length = other._length;
    ```

1. Assegnare i membri dati dell'oggetto di origine ai valori predefiniti. Ciò impedisce al distruttore di liberare più volte le risorse, ad esempio la memoria:

    ```cpp
    other._data = nullptr;
    other._length = 0;
    ```

### <a name="to-create-a-move-assignment-operator-for-a-c-class"></a>Per creare un operatore di assegnazione di spostamento per una classe C++

1. Definire un operatore di assegnazione vuoto che accetti un riferimento rvalue al tipo della classe come relativo parametro e che restituisca un riferimento al tipo della classe, come illustrato nel seguente esempio:

    ```cpp
    MemoryBlock& operator=(MemoryBlock&& other)
    {
    }
    ```

1. Nell'operatore di assegnazione di spostamento aggiungere un'istruzione condizionale che non esegua alcuna operazione se si tenta di assegnare l'oggetto a se stesso.

    ```cpp
    if (this != &other)
    {
    }
    ```

1. Nell'istruzione condizionale, liberare tutte le risorse (ad esempio la memoria) dall'oggetto a cui sono state assegnate.

   Nell'esempio seguente viene liberato il membro `_data` dall'oggetto a cui è assegnato:

    ```cpp
    // Free the existing resource.
    delete[] _data;
    ```

   Seguire i passaggi 2 e 3 nella prima procedura per trasferire i membri dati dall'oggetto di origine all'oggetto che viene costruito:

    ```cpp
    // Copy the data pointer and its length from the
    // source object.
    _data = other._data;
    _length = other._length;

    // Release the data pointer from the source object so that
    // the destructor does not free the memory multiple times.
    other._data = nullptr;
    other._length = 0;
    ```

1. Restituire un riferimento all'oggetto corrente, come illustrato nell'esempio seguente:

    ```cpp
    return *this;
    ```

## <a name="example-complete-move-constructor-and-assignment-operator"></a>Esempio: costruttore di spostamento completo e operatore di assegnazione

Nell'esempio seguente vengono mostrati il costruttore di spostamento e l'operatore di assegnazione di spostamento completi per la classe `MemoryBlock`:

```cpp
// Move constructor.
MemoryBlock(MemoryBlock&& other) noexcept
   : _data(nullptr)
   , _length(0)
{
   std::cout << "In MemoryBlock(MemoryBlock&&). length = "
             << other._length << ". Moving resource." << std::endl;

   // Copy the data pointer and its length from the
   // source object.
   _data = other._data;
   _length = other._length;

   // Release the data pointer from the source object so that
   // the destructor does not free the memory multiple times.
   other._data = nullptr;
   other._length = 0;
}

// Move assignment operator.
MemoryBlock& operator=(MemoryBlock&& other) noexcept
{
   std::cout << "In operator=(MemoryBlock&&). length = "
             << other._length << "." << std::endl;

   if (this != &other)
   {
      // Free the existing resource.
      delete[] _data;

      // Copy the data pointer and its length from the
      // source object.
      _data = other._data;
      _length = other._length;

      // Release the data pointer from the source object so that
      // the destructor does not free the memory multiple times.
      other._data = nullptr;
      other._length = 0;
   }
   return *this;
}
```

## <a name="example-use-move-semantics-to-improve-performance"></a>Esempio di utilizzo della semantica di spostamento per migliorare le prestazioni

Nell'esempio seguente viene mostrato come la semantica di spostamento possa migliorare le prestazioni delle applicazioni in uso. Nell'esempio vengono aggiunti due elementi a un oggetto vettore, quindi viene inserito un nuovo elemento tra i due elementi esistenti. La `vector` classe utilizza la semantica di spostamento per eseguire in modo efficiente l'operazione di inserimento spostando gli elementi del vettore anziché copiarli.

```cpp
// rvalue-references-move-semantics.cpp
// compile with: /EHsc
#include "MemoryBlock.h"
#include <vector>

using namespace std;

int main()
{
   // Create a vector object and add a few elements to it.
   vector<MemoryBlock> v;
   v.push_back(MemoryBlock(25));
   v.push_back(MemoryBlock(75));

   // Insert a new element into the second position of the vector.
   v.insert(v.begin() + 1, MemoryBlock(50));
}
```

Nell'esempio viene prodotto l'output seguente:

```Output
In MemoryBlock(size_t). length = 25.
In MemoryBlock(MemoryBlock&&). length = 25. Moving resource.
In ~MemoryBlock(). length = 0.
In MemoryBlock(size_t). length = 75.
In MemoryBlock(MemoryBlock&&). length = 75. Moving resource.
In MemoryBlock(MemoryBlock&&). length = 25. Moving resource.
In ~MemoryBlock(). length = 0.
In ~MemoryBlock(). length = 0.
In MemoryBlock(size_t). length = 50.
In MemoryBlock(MemoryBlock&&). length = 50. Moving resource.
In MemoryBlock(MemoryBlock&&). length = 25. Moving resource.
In MemoryBlock(MemoryBlock&&). length = 75. Moving resource.
In ~MemoryBlock(). length = 0.
In ~MemoryBlock(). length = 0.
In ~MemoryBlock(). length = 0.
In ~MemoryBlock(). length = 25. Deleting resource.
In ~MemoryBlock(). length = 50. Deleting resource.
In ~MemoryBlock(). length = 75. Deleting resource.
```

Prima di Visual Studio 2010, questo esempio produceva l'output seguente:

```Output
In MemoryBlock(size_t). length = 25.
In MemoryBlock(const MemoryBlock&). length = 25. Copying resource.
In ~MemoryBlock(). length = 25. Deleting resource.
In MemoryBlock(size_t). length = 75.
In MemoryBlock(const MemoryBlock&). length = 25. Copying resource.
In ~MemoryBlock(). length = 25. Deleting resource.
In MemoryBlock(const MemoryBlock&). length = 75. Copying resource.
In ~MemoryBlock(). length = 75. Deleting resource.
In MemoryBlock(size_t). length = 50.
In MemoryBlock(const MemoryBlock&). length = 50. Copying resource.
In MemoryBlock(const MemoryBlock&). length = 50. Copying resource.
In operator=(const MemoryBlock&). length = 75. Copying resource.
In operator=(const MemoryBlock&). length = 50. Copying resource.
In ~MemoryBlock(). length = 50. Deleting resource.
In ~MemoryBlock(). length = 50. Deleting resource.
In ~MemoryBlock(). length = 25. Deleting resource.
In ~MemoryBlock(). length = 50. Deleting resource.
In ~MemoryBlock(). length = 75. Deleting resource.
```

La versione di questo esempio che utilizza la semantica di spostamento è più efficiente rispetto alla versione che non utilizza tale semantica in quanto esegue meno operazioni di copia, allocazione e deallocazione di memoria.

## <a name="robust-programming"></a>Programmazione efficiente

Per evitare perdite di risorse, liberare sempre le risorse, quali memoria, handle di file e socket, nell'operatore di assegnazione di spostamento.

Per evitare la distruzione irreversibile delle risorse, gestire in modo corretto l'assegnazione automatica nell'operatore di assegnazione di spostamento.

Se si assegna sia un costruttore di spostamento che un operatore di assegnazione di spostamento per la classe, è possibile eliminare il codice ridondante scrivendo il costruttore di spostamento in modo che esegua una chiamata all'operatore di assegnazione di spostamento. Nell'esempio seguente viene illustrata una versione modificata del costruttore di spostamento che chiama l'operatore di assegnazione di spostamento:

```cpp
// Move constructor.
MemoryBlock(MemoryBlock&& other) noexcept
   : _data(nullptr)
   , _length(0)
{
   *this = std::move(other);
}
```

La funzione [std:: Move](../standard-library/utility-functions.md#move) converte lvalue `other` in un rvalue.

## <a name="see-also"></a>Vedi anche

[Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md)<br/>
[STD:: Move](../standard-library/utility-functions.md#move)
