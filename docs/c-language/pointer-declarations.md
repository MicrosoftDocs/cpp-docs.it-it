---
title: "Dichiarazioni di puntatori | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "const (parola chiave) [C]"
  - "dichiarazioni, puntatori"
  - "dichiarazioni di puntatori"
  - "puntatori, dichiarazioni"
ms.assetid: 8b3b7fc7-f44d-480d-b6f9-cebe4e5462a6
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Dichiarazioni di puntatori
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una "dichiarazione di puntatore" denomina una variabile puntatore e specifica il tipo dell'oggetto a cui fa riferimento la variabile.  Una variabile dichiarata come puntatore contiene un indirizzo di memoria.  
  
## Sintassi  
 `declarator`:  
 `pointer` opt *direct\-declarator*  
  
 *direct\-declarator*:  
 *identifier*  
  
 **\(**  *declarator*  **\)**  
  
 *direct\-declarator*  **\[**  *constant\-expression* opt **\]**  
  
 *direct\-declarator*  **\(**  *parameter\-type\-list*  **\)**  
  
 *direct\-declarator*  **\(**  *identifier\-list* opt **\)**  
  
 `pointer`:  
 **\*** *type\-qualifier\-list* opt  
  
 **\*** *type\-qualifier\-list* opt `pointer`  
  
 *type\-qualifier\-list*:  
 *type\-qualifier*  
  
 *type\-qualifier\-list type\-qualifier*  
  
 *type\-specifier* fornisce il tipo dell'oggetto, che può essere qualsiasi tipo di base, struttura o unione.  Le variabili puntatore possono inoltre fare riferimento a funzioni, matrici e altri puntatori. Per informazioni sulla dichiarazione e l'interpretazione dei tipi di puntatore più complessi, vedere [Interpretazione dei dichiaratori più complessi](../c-language/interpreting-more-complex-declarators.md).  
  
 Rendendo *type\-specifier* `void`, è possibile ritardare la specifica del tipo a cui fa riferimento il puntatore.  Tale elemento viene definito "puntatore a `void`" e viene scritto come `void *`.  Una variabile dichiarata come puntatore a `void` può essere utilizzata per fare riferimento a un oggetto di qualsiasi tipo.  Tuttavia, per eseguire la maggior parte delle operazioni sul puntatore o sull'oggetto ai quali fa riferimento, il tipo a cui fa riferimento deve essere specificato in modo esplicito per ogni operazione. Le variabili di tipo **char \*** e di tipo **void \*** sono compatibili con l'assegnazione senza un cast di tipo. Tale conversione può essere eseguita mediante un cast di tipo. Per ulteriori informazioni, vedere la pagina relativa alle [conversioni basate su cast di tipo](../c-language/type-cast-conversions.md).  
  
 *type\-qualifier* può essere **const** o `volatile`, oppure entrambi.  Tali qualificatori specificano rispettivamente che il puntatore non può essere modificato dal programma stesso \(**const**\) o che il puntatore può essere correttamente modificato da un processo che esula dal controllo del programma \(`volatile`\). Per ulteriori informazioni su **const** e `volatile`, vedere [Qualificatori di tipo](../c-language/type-qualifiers.md).  
  
 Il `declarator` assegna un nome alla variabile e può includere un modificatore di tipo.  Ad esempio, se `declarator` rappresenta una matrice, il tipo del puntatore viene modificato per rappresentare un puntatore a una matrice.  
  
 È possibile dichiarare un puntatore a un tipo di struttura, unione o enumerazione prima di definire il tipo di struttura, unione o enumerazione.  Il puntatore viene dichiarato tramite il tag di unione o della struttura come illustrato negli esempi riportati di seguito.  Tali dichiarazioni sono consentite perché non è necessario che il compilatore conosca le dimensioni della struttura o dell'unione per allocare lo spazio per la variabile puntatore.  
  
## Esempi  
 Negli esempi riportati di seguito vengono illustrate le dichiarazioni di puntatore:  
  
```  
char *message; /* Declares a pointer variable named message */  
```  
  
 Il puntatore `message` fa riferimento a una variabile con il tipo `char`.  
  
```  
int *pointers[10];  /* Declares an array of pointers */  
```  
  
 La matrice `pointers` dispone di 10 elementi; ogni elemento è un puntatore a una variabile con il tipo `int`.  
  
```  
int (*pointer)[10]; /* Declares a pointer to an array of 10 elements */  
```  
  
 La variabile puntatore fa riferimento a matrice con 10 elementi.  Ogni elemento di questa matrice dispone del tipo `int`.  
  
```  
int const *x;      /* Declares a pointer variable, x,  
                      to a constant value */   
```  
  
 Il puntatore `x` può essere modificato per fare riferimento a un valore `int` diverso, ma il valore a cui fa riferimento non può essere modificato.  
  
```  
const int some_object = 5 ;  
int other_object = 37;  
int *const y = &fixed_object;  
int volatile *const z = &some_object;  
int *const volatile w = &some_object;  
```  
  
 La variabile `y` in queste dichiarazioni viene dichiarata come puntatore costante a un valore `int`.  Il valore a cui fa riferimento può essere modificato, ma il puntatore deve sempre fare riferimento alla stessa posizione: l'indirizzo di `fixed_object`.  Allo stesso modo, `z` è un puntatore costante, ma viene dichiarato per fare riferimento a un oggetto `int` il cui valore non può essere modificato dal programma.  L'identificatore aggiuntivo `volatile` indica che anche se il valore di **const int** a cui fa riferimento `z` non può essere modificato dal programma, potrebbe essere correttamente modificato da un processo in esecuzione contemporanea al programma.  La dichiarazione di `w` specifica che il programma non può modificare né il valore a cui viene fatto riferimento, né il puntatore.  
  
```  
struct list *next, *previous; /* Uses the tag for list */  
```  
  
 In questo esempio vengono dichiarate due variabili puntatore, `next` e `previous` che fanno riferimento al tipo di struttura `list`.  Questa dichiarazione può essere visualizzata prima della definizione del tipo di struttura `list` \(vedere l'esempio successivo\), purché la definizione di tipo `list` abbia la stessa visibilità della dichiarazione.  
  
```  
struct list   
{  
    char *token;  
    int count;  
    struct list *next;  
} line;  
```  
  
 La variabile `line` dispone del tipo di struttura denominato `list`.  Il tipo di struttura `list` dispone di tre membri: il primo membro è un puntatore a un valore `char`, il secondo è un valore `int` e il terzo è un puntatore a un'altra struttura `list`.  
  
```  
struct id   
{  
    unsigned int id_no;  
    struct name *pname;  
} record;  
```  
  
 La variabile `record` dispone del tipo di struttura `id`.  Si noti che `pname` è dichiarato come puntatore a un altro tipo di struttura denominato `name`.  Questa dichiarazione può essere visualizzata prima che venga definito il tipo `name`.  
  
## Vedere anche  
 [Dichiaratori e dichiarazioni di variabili](../c-language/declarators-and-variable-declarations.md)