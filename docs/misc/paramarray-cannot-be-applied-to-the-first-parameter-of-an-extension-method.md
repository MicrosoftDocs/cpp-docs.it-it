---
title: "Impossibile applicare &#39;ParamArray&#39; al primo parametro di un metodo di estensione | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc36554"
  - "bc36554"
helpviewer_keywords: 
  - "BC36554"
ms.assetid: 0778a854-246f-4c2b-943d-ea8883b3aa6f
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile applicare &#39;ParamArray&#39; al primo parametro di un metodo di estensione
Impossibile applicare 'ParamArray' al primo parametro di un metodo di estensione. Il primo parametro specifica il tipo da estendere.  
  
 Il primo parametro di un metodo di estensione specifica il tipo di dati che il metodo estende. Di conseguenza, il primo parametro è obbligatorio e non può essere facoltativo. Dal momento che una matrice di parametri è automaticamente facoltativa, non è valida come primo argomento di un metodo di estensione.  
  
> [!NOTE]
>  Quando viene eseguito il metodo, l'istanza del tipo di dati estesi che richiama il metodo diventa l'argomento per il primo parametro del metodo. Ad esempio, l'istanza `greeting` in `greeting.Print()` è l'argomento per il primo parametro, `str`, nel metodo di estensione `Public Sub Print (ByVal str As String)`.  
  
 **ID errore:** BC36554  
  
### Per correggere l'errore  
  
-   Se la matrice di parametri non specifica il tipo di dati che si vuole estendere, aggiungere un nuovo primo parametro che specifichi il tipo.  
  
    ```  
    <Extension()> Public Sub AddTo(ByRef str As String, ByVal ParamArray addOns() As String) ' Concatenate the strings in addOns to str. End Sub  
    ```  
  
-   Se la matrice di parametri specifica il tipo di dati che si vuole estendere, modificarla in una matrice standard, che richiede un argomento, anziché una matrice di parametri. Le matrici normali possono essere estese.  
  
    ```  
    <Extension()> Public Function Sum(ByVal ints() As Integer) As Integer Dim total As Integer = 0 For Each i As Integer In ints total = total + i Next i Return total End Function  
    ```  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(Visual%20Basic\).md)   
 [Parameter Arrays](../Topic/Parameter%20Arrays%20\(Visual%20Basic\).md)   
 [Optional Parameters](../Topic/Optional%20Parameters%20\(Visual%20Basic\).md)