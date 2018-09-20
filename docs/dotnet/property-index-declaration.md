---
title: Dichiarazione di proprietà indice | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- indexers
- default indexers
- defaults, indexers
- indexed properties, C++
ms.assetid: d898fdbc-2106-4b6a-8c5c-9f511d80fc2f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: a6917742b285b3700548b54fef164d01c0594e5e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46380465"
---
# <a name="property-index-declaration"></a>Dichiarazione degli indici di proprietà

La sintassi per dichiarare una proprietà indicizzata ha modificato dalle estensioni gestite per C++ in Visual C++.

Il principale limite del supporto del linguaggio delle estensioni gestite di proprietà indicizzate è l'incapacità di fornire l'indice a livello di classe; vale a dire tutte le proprietà indicizzate sono necessarie per essere assegnato un nome e pertanto non è, ad esempio, per fornire un operatore di indice gestito che può essere applicato direttamente a un `Vector` o `Matrix` oggetto della classe. Un secondo meno punti deboli è che è visivamente difficile distinguere una proprietà da una proprietà indicizzata, il numero di parametri è la sola indicazione. Infine, le proprietà indicizzate soggetta a problemi analoghi a quelli delle proprietà non indicizzata, le funzioni di accesso non vengono considerati come un'unità atomica, ma suddivisi in singoli metodi.  Ad esempio:

```
public __gc class Vector;
public __gc class Matrix {
   float mat[,];

public:
   __property void set_Item( int r, int c, float value);
   __property float get_Item( int r, int c );

   __property void set_Row( int r, Vector* value );
   __property Vector* get_Row( int r );
};
```

Come si può notare in questo caso, gli indicizzatori si distinguono solo per i parametri aggiuntivi per specificare due o singolo indice della dimensione. Nella nuova sintassi, gli indicizzatori sono racchiusi tra parentesi quadre ([,]) dopo il nome dell'indicizzatore e indicando il numero e il tipo di ogni indice:

```
public ref class Vector {};
public ref class Matrix {
private:
   array<float, 2>^ mat;

public:
   property float Item [int,int] {
      float get( int r, int c );
      void set( int r, int c, float value );
   }

   property Vector^ Row [int] {
      Vector^ get( int r );
      void set( int r, Vector^ value );
   }
};
```

Per indicare un indicizzatore a livello di classe che può essere applicato direttamente agli oggetti della classe nella nuova sintassi, il `default` (parola chiave) viene riutilizzata per sostituire con un nome esplicito. Ad esempio:

```
public ref class Matrix {
private:
   array<float, 2>^ mat;

public:
   // ok: class level indexer now
   //
   //     Matrix mat;
   //     mat[ 0, 0 ] = 1;
   //
   // invokes the set accessor of the default indexer

   property float default [int,int] {
      float get( int r, int c );
      void set( int r, int c, float value );
   }

   property Vector^ Row [int] {
      Vector^ get( int r );
      void set( int r, Vector^ value );
   }
};
```

Nella nuova sintassi, quando il valore predefinito è indicizzato è specificata la proprietà, i seguenti due nomi sono riservati: `get_Item` e `set_Item`. Questo avviene perché questi sono i nomi sottostanti generati per la proprietà indicizzata predefinita.

Si noti che non vi sia alcuna sintassi semplice indice analoga alla sintassi di proprietà semplice.

## <a name="see-also"></a>Vedere anche

[Dichiarazioni di membri in una classe o interfaccia (C++/CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)
