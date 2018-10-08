---
title: In modo esplicito impostate come predefinite e funzioni eliminate | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 5a588478-fda2-4b3f-a279-db3967f5e07e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7c199f687f5004066bf67d087daa1bd7a5b27d01
ms.sourcegitcommit: 997e6b7d336cddb388bb6e9e56527725fcaa0624
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/08/2018
ms.locfileid: "48861161"
---
# <a name="explicitly-defaulted-and-deleted-functions"></a>Funzioni impostate come predefinite ed eliminate in modo esplicito

In C++11 le funzioni impostate come predefinite e le funzioni eliminate offrono il controllo esplicito sulla eventuale generazione automatica delle funzioni membro speciali. Le funzioni eliminate forniscono inoltre un semplice linguaggio per impedire il verificarsi di promozioni di tipo problematiche in argomenti di funzioni di tutti i tipi, ad esempio funzioni membro di tipo speciale, funzioni membro normali e funzioni non membro, che causerebbero una chiamata di funzione non desiderata.

## <a name="benefits-of-explicitly-defaulted-and-deleted-functions"></a>Vantaggi delle funzioni impostate come predefinite e delle funzioni eliminate

In C++ il compilatore genera automaticamente il costruttore predefinito, il costruttore di copia, l'operatore di assegnazione di copia e il distruttore per un tipo se non viene dichiarato. Queste funzioni sono noti come il *funzioni membro speciali*, e sono ciò che rende semplice i tipi definiti dall'utente in C++ si comportano come le strutture in C. Vale a dire, è possibile creare, copiare ed eliminarle definitivamente senza alcun impegno di codifica aggiuntivo. In C++11 è stata introdotta la semantica di spostamento nel linguaggio e aggiunge il costruttore di spostamento e l'operatore di assegnazione di spostamento all'elenco delle funzioni membro speciali che il compilatore è in grado di generare automaticamente.

Ciò risulta utile per i tipi semplici, ma i tipi complessi stessi definiscono spesso una o più funzioni membro speciali e questo può impedire la generazione automatica di altre funzioni membro speciali. In pratica:

- Se un costruttore viene dichiarato in modo esplicito, non viene generato automaticamente alcun costruttore predefinito.

- Se un distruttore virtuale viene dichiarato in modo esplicito, non viene generato automaticamente alcun distruttore predefinito.

- Se un costruttore di spostamento o un operatore di assegnazione di spostamento viene dichiarato in modo esplicito:

   - Non viene generato automaticamente alcun costruttore di copia.

   - Non viene generato automaticamente alcun operatore di assegnazione di copia.

- Se un costruttore di copia, un operatore di assegnazione di copia, un costruttore di spostamento, un operatore di assegnazione spostamento o un distruttore è dichiarato in modo esplicito:

   - Non viene generato automaticamente alcun costruttore di spostamento.

   - Non viene generato automaticamente alcun operatore di assegnazione di spostamento.

> [!NOTE]
>  Lo standard C++11 specifica inoltre le regole aggiuntive seguenti:
>
> - Se un costruttore di copia o distruttore è dichiarato in modo esplicito, la generazione automatica dell'operatore di assegnazione di copia è deprecata.
> - Se un operatore di assegnazione di copia o un distruttore è dichiarato in modo esplicito, la generazione automatica del costruttore di copia è deprecata.
>
>  In entrambi i casi, in Visual Studio si continua automaticamente a generare le funzioni necessarie in modo implicito e non viene generato alcun avviso.

Le conseguenze di tali regole possono inoltre comportare la creazione di gerarchie di oggetti. Ad esempio, se per qualsiasi motivo una classe di base non ha un costruttore predefinito che è possibile chiamato da una classe di derivazione, vale a dire, un **pubblico** o **protetti** costruttore che non accetta parametri, ovvero quindi una classe che deriva da non riesce a generare automaticamente il proprio costruttore predefinito.

Queste regole possono complicare l'implementazione di tipi semplici definiti dall'utente e idiomi C++ comuni, ad esempio rendendo non copiabile un tipo definito dall'utente, dichiarando il costruttore di copia e l'operatore di assegnazione di copia in modo privato e senza definirli.

```cpp
struct noncopyable
{
  noncopyable() {};

private:
  noncopyable(const noncopyable&);
  noncopyable& operator=(const noncopyable&);
};
```

Prima di C++11 questo frammento di codice ha rappresentato la forma idiomatica dei tipi non copiabili. Presenta tuttavia alcuni problemi:

- Il costruttore di copia deve essere dichiarato privatamente per poter essere nascosto, ma la dichiarazione stessa impedisce la generazione automatica del costruttore predefinito. È necessario definire esplicitamente il costruttore predefinito, se lo si vuole usare, anche se non esegue alcuna operazione.

- Anche se il costruttore predefinito definito esplicitamente non esegue alcuna operazione, viene considerato non superfluo dal compilatore. È meno efficiente di un costruttore predefinito generato automaticamente e impedisce a `noncopyable` di essere effettivamente un tipo POD.

- Anche se il costruttore di copia e l'operatore di assegnazione di copia sono invisibili al codice esterno, le funzioni membro e gli elementi Friend di `noncopyable` sono comunque in grado di visualizzarli e chiamarli. Se vengono dichiarati ma non definiti, la chiamata di tali elementi genera un errore del linker.

- Benché questo sia un idioma comunemente accettato, l'intento sarà chiaro solo se si comprendono tutte le regole per la generazione automatica delle funzioni membro speciali.

In C++11 il linguaggio non copiabile può essere implementato in modo più semplice.

```cpp
struct noncopyable
{
  noncopyable() =default;
  noncopyable(const noncopyable&) =delete;
  noncopyable& operator=(const noncopyable&) =delete;
};
```

Si noti il modo in cui vengono risolti i problemi relativi all'idioma pre-C++11:

- La generazione del costruttore predefinito viene impedita dichiarando il costruttore di copia, ma è possibile ripristinarlo impostandolo in modo esplicito come predefinito.

- Le funzioni membro speciali impostate in modo esplicito come predefinite verranno considerate irrilevanti e di conseguenza non esiste una riduzione delle prestazioni. Inoltre a `noncopyable` non viene impedito di essere un tipo POD reale.

- Il costruttore di copia e l'operatore di assegnazione di copia sono pubblici ma eliminati. Definire o chiamare una funzione eliminata è un errore in fase di compilazione.

- Lo scopo è chiaro a chiunque comprenda `=default` e `=delete`. Non è necessario comprendere le regole per la generazione automatica di funzioni membro speciali.

Esistono idiomi simili per la creazione di tipi definiti dall'utente non spostabili, che possono essere solo allocati dinamicamente o che non possono essere allocati dinamicamente. Per ogni idioma sono disponibili implementazioni pre-C++11 che presentano problemi simili, risolti in modo analogo in C++11 mediante l'implementazione sotto forma di funzioni membro speciali impostate come predefinite ed eliminate.

## <a name="explicitly-defaulted-functions"></a>Funzioni impostate come predefinite in modo esplicito

È possibile impostare come predefinita qualsiasi funzione membro speciale, in modo da indicare esplicitamente che la funzione membro speciale usa l'implementazione predefinita, definire la funzione membro speciale con un qualificatore di accesso non pubblico oppure ripristinare una funzione membro speciale la cui generazione automatica è stata impedita da altre circostanze.

Per impostare come predefinita una funzione membro speciale, dichiararla come illustrato nell'esempio seguente:

```cpp
struct widget
{
  widget()=default;

  inline widget& operator=(const widget&);
};

inline widget& widget::operator=(const widget&) =default;
```

Si noti che è possibile impostare come predefinita una funzione membro speciale all'esterno del corpo di una classe, purché sia impostabile come inline.

A causa dei vantaggi a livello di prestazioni offerti dalle funzioni membro speciali superflue, è consigliabile favorire le funzioni membro speciali generate automaticamente rispetto ai corpi di funzione vuoti quando si vuole ottenere il comportamento predefinito. È possibile ottenere questo risultato impostando esplicitamente come predefinita la funzione membro speciale o non dichiarandola e non dichiarando le altre funzioni membro speciali che ne impedirebbero la generazione automatica.

## <a name="deleted-functions"></a>Funzioni eliminate

È possibile eliminare le funzioni membro speciali, oltre alle funzioni membro normali e alle funzioni non membro, per impedirne la definizione o la chiamata. L'eliminazione di funzioni membro speciali offre un modo più semplice per impedire al compilatore di generare funzioni membro speciali indesiderate. La funzione deve essere eliminata come viene dichiarata, non può essere eliminata in seguito nel modo in cui può essere dichiarata e successivamente impostata in base alla forma predefinita.

```cpp
struct widget
{
  // deleted operator new prevents widget from being dynamically allocated.
  void* operator new(std::size_t) = delete;
};
```

L'eliminazione di una funzione membro normale o di funzioni non membro evita che le promozioni di tipi problematici provochino la chiamata di una funzione non desiderata. Questo procedimento funziona poiché le funzioni eliminate partecipano comunque alla risoluzione dell'overload e offrono una corrispondenza migliore rispetto alla funzione che può essere chiamata dopo la promozione dei tipi. La chiamata di funzione viene risolta nella funzione più specifica, ma eliminata e genera un errore del compilatore.

```cpp
// deleted overload prevents call through type promotion of float to double from succeeding.
void call_with_true_double_only(float) =delete;
void call_with_true_double_only(double param) { return; }
```

Si noti che nell'esempio precedente che chiamando `call_with_true_double_only` tramite un **float** argomento provocherebbe un errore del compilatore, ma la chiamata `call_with_true_double_only` usando un **int** argomento non lo; nella finestra di **int** i casi, l'argomento verrà promosso da **int** a **double** e richiamerà correttamente la **double** versione della funzione, anche se ciò potrebbe non essere ciò che serve. Per garantire che le chiamate a questa funzione con un argomento di tipo non double causino un errore del compilatore, è possibile dichiarare una versione del modello della funzione eliminata.

```cpp
template < typename T >
void call_with_true_double_only(T) =delete; //prevent call through type promotion of any T to double from succeeding.

void call_with_true_double_only(double param) { return; } // also define for const double, double&, etc. as needed.
```